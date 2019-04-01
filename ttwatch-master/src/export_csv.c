/*****************************************************************************\
** export_csv.c                                                              **
** CSV export code                                                           **
\*****************************************************************************/

#include "ttbin.h"
#include "protobuf.h"
#include "cycling_cadence.h"

#include <math.h>

void export_csv(TTBIN_FILE *ttbin, FILE *file) {
  uint32_t steps_prev = 0;
  uint32_t current_lap = 1;
  char timestr[32];
  TTBIN_RECORD *record;
  unsigned heart_rate;
  double distance_factor = 1;
  unsigned time;
  time_t timestamp;
  CyclingCadenceData cc_data = cc_initialize();

  fputs(
      "time,activityType,lapNumber,distance,speed,calories,lat,long,elevation,heartRate,cycles,localtime,elapsedTime,cyclingCadence,wheelSpeed\r\n",
      file);

  switch (ttbin->activity) {
    case ACTIVITY_RUNNING:
    case ACTIVITY_CYCLING:
    case ACTIVITY_FREESTYLE:heart_rate = 0;
      current_lap = 1;
      for (record = ttbin->first; record; record = record->next) {
        switch (record->tag) {
          case TAG_GPS:
            /* this will happen if the activity is paused and then resumed, or if the GPS signal is lost  */
            if ((record->gps.timestamp==0) || ((record->gps.latitude==0) && (record->gps.longitude==0)))
              continue;

            strftime(timestr, sizeof(timestr), "%FT%X", localtime(&record->gps.timestamp));

            time = (unsigned) (record->gps.timestamp - ttbin->timestamp_utc);
            fprintf(file, "%u,%d,%d,%.5f,%.2f,%d,%.7f,%.7f,",
                    time, ttbin->activity, current_lap, record->gps.cum_distance, record->gps.instant_speed,
                    record->gps.calories, record->gps.latitude, record->gps.longitude);
            if (!isnan(record->gps.elevation))
              fprintf(file, "%.2f", record->gps.elevation);
            fputs(",", file);
            if (heart_rate > 0)
              fprintf(file, "%d", heart_rate);
            fprintf(file, ",%d,%s", record->gps.cycles, timestr);
            if (time >= 3600)
              fprintf(file, ",%d:%02d:%02d", time/3600, (time%3600)/60, time%60);
            else
              fprintf(file, ",%d:%02d", time/60, time%60);
            fprintf(file, ",%d,%f\r\n", cc_data.cycling_cadence, cc_data.wheel_speed);
            cc_gps_packet_tick(&cc_data);
            heart_rate = 0;
            break;
          case TAG_HEART_RATE:heart_rate = record->heart_rate.heart_rate;
            break;
          case TAG_WHEEL_SIZE:cc_set_wheel_size(&cc_data, &record->wheel_size);
            break;
          case TAG_CYCLING_CADENCE:cc_sensor_packet(&cc_data, &record->cycling_cadence);
            break;
          case TAG_LAP:++current_lap;
            break;
        }
      }
      break;

    case ACTIVITY_TREADMILL:heart_rate = 0;
      current_lap = 1;
      for (record = ttbin->last; record; record = record->prev) {
        if ((record->tag==TAG_TREADMILL) && record->treadmill.distance) {
          distance_factor = ttbin->total_distance/record->treadmill.distance;
          break;
        }
      }
      for (record = ttbin->first; record; record = record->next) {
        switch (record->tag) {
          case TAG_TREADMILL:
            /* this will happen if the activity is paused and then resumed */
            if (record->treadmill.timestamp==0)
              continue;

            strftime(timestr, sizeof(timestr), "%FT%X", localtime(&record->treadmill.timestamp));

            time = (unsigned) (record->treadmill.timestamp - ttbin->timestamp_utc);
            fprintf(file, "%u,7,%u,%.2f,,%d,,,,", time, current_lap,
                    record->treadmill.distance*distance_factor, record->treadmill.calories);
            if (heart_rate > 0)
              fprintf(file, "%d", heart_rate);
            fprintf(file, ",%d,%s", record->treadmill.steps - steps_prev, timestr);
            if (time >= 3600)
              fprintf(file, ",%d:%02d:%02d,,\r\n", time/3600, (time%3600)/60, time%60);
            else
              fprintf(file, ",%d:%02d,,\r\n", time/60, time%60);
            steps_prev = record->treadmill.steps;
            heart_rate = 0;
            break;
          case TAG_HEART_RATE:heart_rate = record->heart_rate.heart_rate;
            break;
          case TAG_LAP:++current_lap;
            break;
        }
      }
      break;

    case ACTIVITY_SWIMMING:
      for (record = ttbin->first; record; record = record->next) {
        if (record->tag!=TAG_SWIM)
          continue;

        /* this will happen if the activity is paused and then resumed */
        if (record->swim.timestamp==0)
          continue;

        strftime(timestr, sizeof(timestr), "%FT%X", localtime(&record->swim.timestamp));

        time = (unsigned) (record->swim.timestamp - ttbin->timestamp_utc);
        fprintf(file, "%u,2,%d,%.2f,,%d,,,,,%d,%s",
                time, record->swim.completed_laps + 1, record->swim.total_distance,
                record->swim.total_calories, record->swim.strokes*60, timestr);
        if (time >= 3600)
          fprintf(file, ",%d:%02d:%02d,,\r\n", time/3600, (time%3600)/60, time%60);
        else
          fprintf(file, ",%d:%02d,,\r\n", time/60, time%60);
      }
      break;

    case ACTIVITY_INDOOR:
    case ACTIVITY_GYM:
      for (record = ttbin->first; record; record = record->next) {
        switch (record->tag) {
          case TAG_HEART_RATE:heart_rate = record->heart_rate.heart_rate;
            break;
          case TAG_CYCLING_CADENCE:cc_sensor_packet(&cc_data, &record->cycling_cadence);
            break;
          case TAG_WHEEL_SIZE:cc_set_wheel_size(&cc_data, &record->wheel_size);
            break;
          case TAG_LAP:++current_lap;
            break;
          case TAG_INDOOR_CYCLING:timestamp = record->indoor_cycling.timestamp;
            strftime(timestr, sizeof(timestr), "%FT%X", localtime(&timestamp));
            time = (unsigned) (record->indoor_cycling.timestamp - ttbin->timestamp_local);
            fprintf(file, "%u,11,%u,%.2f,%.2f,%u,,,,%u,%u,%s",
                    time,
                    current_lap,
                    record->indoor_cycling.distance_meters,
                    cc_data.wheel_speed,
                    record->indoor_cycling.calories,
                    heart_rate,
                    record->indoor_cycling.cycling_cadence,
                    timestr
            );
            if (time >= 3600)
              fprintf(file, ",%d:%02d:%02d,,\r\n", time/3600, (time%3600)/60, time%60);
            else
              fprintf(file, ",%d:%02d,,\r\n", time/60, time%60);
            break;
          case TAG_GYM:timestamp = record->gym.timestamp;
            strftime(timestr, sizeof(timestr), "%FT%X", localtime(&timestamp));
            time = (unsigned) (record->indoor_cycling.timestamp - ttbin->timestamp_local);
            fprintf(file, "%u,9,%u,,,%u,,,,%u,%u,%s",
                    time,
                    current_lap,
                    record->gym.total_calories,
                    heart_rate,
                    record->gym.total_cycles,
                    timestr
            );
            if (time >= 3600)
              fprintf(file, ",%d:%02d:%02d,,\r\n", time/3600, (time%3600)/60, time%60);
            else
              fprintf(file, ",%d:%02d,,\r\n", time/60, time%60);
            break;
        }
      }
      break;
  }

}

void export_protobuf_csv(PROTOBUF_FILE *protobuf, FILE *file) {
  char timestr[32];
  unsigned time;
  time_t timestamp;
  int i;

  fputs("recordId,time,utcOffset,duration,steps,activity_time,distance,calories,base_calories\r\n", file);

  for (i = 0; i < protobuf->activity->n_rootcontainer; i++) {
    RootContainer *container = protobuf->activity->rootcontainer[i];

    if (container->datacontainer && container->datacontainer->subdatacontainer
        && container->datacontainer->subdatacontainer->summary) {
      SummaryRecord *s = container->datacontainer->subdatacontainer->summary;

      fprintf(file,
              "%d,%d,%d,%d,%d,%d,%d,%d,%d\r\n",
              s->recordid,
              s->time,
              s->timezone,
              s->interval,
              s->steps,
              s->activitytime,
              s->distance,
              s->calories,
              s->basecalories);
    }
  }

  /* And now the totals record */
  fprintf(file,
          "Totals,,,%d,%d,%d,%d,%d,%d\r\n",
          protobuf->totals.interval,
          protobuf->totals.steps,
          protobuf->totals.activity_time,
          protobuf->totals.distance,
          protobuf->totals.calories,
          protobuf->totals.base_calories);
}
