static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_2 =
    {
        "options/demo", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_3 =
    {
        "options/units", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "km/kg"},
            {1, "miles/lbs"},
            {2, "km/lbs"},
            {3, "miles/kg"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_5 =
    {
        "options/weight", 1, MANIFEST_TYPE_INT, "g", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_6 =
    {
        "options/height", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_13 =
    {
        "options/language", 1, MANIFEST_TYPE_ENUM, 12,
        {
            {1, "english"},
            {2, "french"},
            {3, "german"},
            {4, "spanish"},
            {5, "italian"},
            {8, "czech"},
            {9, "danish"},
            {10, "finnish"},
            {11, "norwegian"},
            {12, "dutch"},
            {13, "portugese"},
            {14, "swedish"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_14 =
    {
        "options/hrm", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "off"},
            {1, "external"},
            {2, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_15 =
    {
        "options/cadence", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_16 =
    {
        "running/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_17 =
    {
        "cycling/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_19 =
    {
        "treadmill/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_22 =
    {
        "options/dob_day", 1, MANIFEST_TYPE_INT, "", 1, 31
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_23 =
    {
        "options/dob_month", 1, MANIFEST_TYPE_INT, "", 1, 12
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_24 =
    {
        "options/dob_year", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_25 =
    {
        "options/gender", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "male"},
            {1, "female"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_29 =
    {
        "treadmill/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_30 =
    {
        "treadmill/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_33 =
    {
        "running/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_34 =
    {
        "running/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_37 =
    {
        "cycling/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 11,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {14, "cadence"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_38 =
    {
        "cycling/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 11,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {14, "cadence"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_41 =
    {
        "swimming/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 8,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {7, "avg_speed"},
            {8, "lengths"},
            {15, "swolf"},
            {19, "strokes"},
            {20, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_42 =
    {
        "swimming/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 8,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {7, "avg_speed"},
            {8, "lengths"},
            {15, "swolf"},
            {19, "strokes"},
            {20, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_45 =
    {
        "running/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_46 =
    {
        "running/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_47 =
    {
        "running/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_48 =
    {
        "running/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_49 =
    {
        "running/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_50 =
    {
        "running/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_51 =
    {
        "running/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_52 =
    {
        "running/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_53 =
    {
        "running/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_54 =
    {
        "cycling/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_55 =
    {
        "cycling/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_56 =
    {
        "cycling/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_57 =
    {
        "cycling/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_58 =
    {
        "cycling/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_59 =
    {
        "cycling/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_60 =
    {
        "cycling/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_61 =
    {
        "cycling/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_62 =
    {
        "cycling/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_63 =
    {
        "swimming/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_64 =
    {
        "swimming/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_65 =
    {
        "swimming/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_66 =
    {
        "swimming/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_82 =
    {
        "options/time_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "12hr"},
            {1, "24hr"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_83 =
    {
        "options/clock/alarm", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_84 =
    {
        "options/click", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_86 =
    {
        "cycling/wheel_size", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_88 =
    {
        "swimming/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_90 =
    {
        "running/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_91 =
    {
        "cycling/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_92 =
    {
        "treadmill/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_98 =
    {
        "running/training/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
            {5, "race"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_99 =
    {
        "running/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_100 =
    {
        "running/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_102 =
    {
        "running/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_103 =
    {
        "running/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_104 =
    {
        "running/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_105 =
    {
        "running/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_106 =
    {
        "running/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_107 =
    {
        "running/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_112 =
    {
        "treadmill/training/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
            {5, "race"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_113 =
    {
        "treadmill/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_114 =
    {
        "treadmill/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_116 =
    {
        "treadmill/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_117 =
    {
        "treadmill/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_118 =
    {
        "treadmill/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_119 =
    {
        "treadmill/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_120 =
    {
        "treadmill/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_121 =
    {
        "treadmill/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_126 =
    {
        "cycling/training/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
            {5, "race"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_127 =
    {
        "cycling/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_128 =
    {
        "cycling/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_130 =
    {
        "cycling/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_131 =
    {
        "cycling/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_132 =
    {
        "cycling/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_133 =
    {
        "cycling/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_134 =
    {
        "cycling/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_135 =
    {
        "cycling/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_142 =
    {
        "swimming/training/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
            {5, "race"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_143 =
    {
        "swimming/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_144 =
    {
        "swimming/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_147 =
    {
        "swimming/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_148 =
    {
        "swimming/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_149 =
    {
        "swimming/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_150 =
    {
        "swimming/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_151 =
    {
        "swimming/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_152 =
    {
        "swimming/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_153 =
    {
        "swimming/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_154 =
    {
        "swimming/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_155 =
    {
        "treadmill/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_156 =
    {
        "treadmill/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_157 =
    {
        "treadmill/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_158 =
    {
        "treadmill/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_159 =
    {
        "treadmill/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_160 =
    {
        "treadmill/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_161 =
    {
        "treadmill/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_163 =
    {
        "options/buzz", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_169 =
    {
        "options/utc_offset", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_170 =
    {
        "running/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_171 =
    {
        "cycling/training/zones/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "cadence"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_178 =
    {
        "options/night_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_187 =
    {
        "cycling/training/zones/cadence/cadence", 1, MANIFEST_TYPE_INT, "rpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_188 =
    {
        "cycling/training/zones/cadence/variation", 1, MANIFEST_TYPE_INT, "rpm", 0, 100
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_193 =
    {
        "treadmill/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_214 =
    {
        "swimming/pool_size", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_215 =
    {
        "treadmill/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_216 =
    {
        "treadmill/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_221 =
    {
        "running/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_222 =
    {
        "running/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_223 =
    {
        "running/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_224 =
    {
        "running/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_225 =
    {
        "cycling/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_226 =
    {
        "cycling/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_227 =
    {
        "cycling/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_228 =
    {
        "cycling/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_229 =
    {
        "treadmill/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_230 =
    {
        "treadmill/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_231 =
    {
        "treadmill/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_232 =
    {
        "treadmill/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_233 =
    {
        "swimming/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_234 =
    {
        "swimming/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_235 =
    {
        "swimming/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_236 =
    {
        "swimming/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_237 =
    {
        "swimming/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_238 =
    {
        "running/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_239 =
    {
        "cycling/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_241 =
    {
        "treadmill/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_242 =
    {
        "running/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_243 =
    {
        "running/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_244 =
    {
        "cycling/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_245 =
    {
        "cycling/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_246 =
    {
        "treadmill/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_247 =
    {
        "treadmill/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_251 =
    {
        "options/flight_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_265 =
    {
        "running/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_266 =
    {
        "running/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_267 =
    {
        "treadmill/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_268 =
    {
        "treadmill/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_269 =
    {
        "cycling/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_270 =
    {
        "cycling/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_271 =
    {
        "running/training/zones/heart/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "sprint"},
            {1, "speed"},
            {2, "endure"},
            {3, "fat_burn"},
            {4, "easy"},
            {5, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_272 =
    {
        "treadmill/training/zones/heart/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "sprint"},
            {1, "speed"},
            {2, "endure"},
            {3, "fat_burn"},
            {4, "easy"},
            {5, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_273 =
    {
        "cycling/training/zones/heart/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "sprint"},
            {1, "speed"},
            {2, "endure"},
            {3, "fat_burn"},
            {4, "easy"},
            {5, "custom"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_277 =
    {
        "running/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_278 =
    {
        "running/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_279 =
    {
        "cycling/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_280 =
    {
        "cycling/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_281 =
    {
        "treadmill/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_282 =
    {
        "treadmill/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_283 =
    {
        "freestyle/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_284 =
    {
        "freestyle/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_285 =
    {
        "freestyle/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {7, "avg_speed"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_291 =
    {
        "freestyle/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_292 =
    {
        "freestyle/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_293 =
    {
        "freestyle/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_294 =
    {
        "freestyle/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_295 =
    {
        "freestyle/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_296 =
    {
        "freestyle/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_297 =
    {
        "freestyle/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_298 =
    {
        "freestyle/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_299 =
    {
        "freestyle/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_300 =
    {
        "freestyle/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_301 =
    {
        "freestyle/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_302 =
    {
        "freestyle/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_303 =
    {
        "freestyle/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_304 =
    {
        "freestyle/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_305 =
    {
        "freestyle/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_306 =
    {
        "freestyle/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_307 =
    {
        "freestyle/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_308 =
    {
        "freestyle/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_309 =
    {
        "freestyle/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_310 =
    {
        "freestyle/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_311 =
    {
        "freestyle/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 1, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_313 =
    {
        "freestyle/training/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
            {5, "race"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_314 =
    {
        "freestyle/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_315 =
    {
        "freestyle/training/zones/heart/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "sprint"},
            {1, "speed"},
            {2, "endure"},
            {3, "fat_burn"},
            {4, "easy"},
            {5, "custom"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_316 =
    {
        "freestyle/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_317 =
    {
        "freestyle/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_318 =
    {
        "freestyle/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_319 =
    {
        "freestyle/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_320 =
    {
        "freestyle/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_321 =
    {
        "freestyle/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_322 =
    {
        "freestyle/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_323 =
    {
        "freestyle/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_331 =
    {
        "options/tracker", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {1, "on"},
            {2, "off"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_333 =
    {
        "options/tracker/goals/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "time"},
            {1, "steps"},
            {2, "calories"},
            {3, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_334 =
    {
        "options/tracker/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_335 =
    {
        "options/tracker/goals/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_336 =
    {
        "options/tracker/goals/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_337 =
    {
        "options/tracker/goals/steps", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_362 =
    {
        "indoor/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_363 =
    {
        "indoor/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {14, "cadence"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_364 =
    {
        "indoor/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "pace"},
            {5, "avg_pace"},
            {6, "speed"},
            {14, "cadence"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_370 =
    {
        "indoor/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_371 =
    {
        "indoor/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_372 =
    {
        "indoor/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_373 =
    {
        "indoor/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_374 =
    {
        "indoor/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_375 =
    {
        "indoor/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_376 =
    {
        "indoor/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_377 =
    {
        "indoor/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_378 =
    {
        "indoor/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_379 =
    {
        "indoor/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_380 =
    {
        "indoor/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_381 =
    {
        "indoor/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_382 =
    {
        "indoor/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_383 =
    {
        "indoor/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_384 =
    {
        "indoor/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_385 =
    {
        "indoor/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_386 =
    {
        "indoor/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_387 =
    {
        "indoor/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_388 =
    {
        "indoor/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_389 =
    {
        "indoor/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_390 =
    {
        "indoor/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_392 =
    {
        "indoor/training/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
            {5, "race"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_393 =
    {
        "indoor/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_394 =
    {
        "indoor/training/zones/heart/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "sprint"},
            {1, "speed"},
            {2, "endure"},
            {3, "fat_burn"},
            {4, "easy"},
            {5, "custom"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_395 =
    {
        "indoor/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_396 =
    {
        "indoor/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_398 =
    {
        "indoor/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_400 =
    {
        "indoor/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_401 =
    {
        "indoor/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_402 =
    {
        "indoor/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_413 =
    {
        "gym/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 5,
        {
            {0, "clock"},
            {1, "duration"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_414 =
    {
        "gym/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 5,
        {
            {0, "clock"},
            {1, "duration"},
            {20, "calories"},
            {21, "heart"},
            {25, "hr_zone"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_423 =
    {
        "gym/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_424 =
    {
        "gym/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_426 =
    {
        "gym/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_427 =
    {
        "gym/training/laps/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_428 =
    {
        "gym/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_431 =
    {
        "gym/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_434 =
    {
        "gym/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_437 =
    {
        "gym/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_440 =
    {
        "gym/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_442 =
    {
        "gym/training/type", 1, MANIFEST_TYPE_ENUM, 5,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
            {4, "zones"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_444 =
    {
        "gym/training/zones/heart/type", 1, MANIFEST_TYPE_ENUM, 6,
        {
            {0, "sprint"},
            {1, "speed"},
            {2, "endure"},
            {3, "fat_burn"},
            {4, "easy"},
            {5, "custom"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_445 =
    {
        "gym/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_446 =
    {
        "gym/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_448 =
    {
        "gym/training/goals/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010113_460 =
    {
        "options/tracker/sleep", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_473 =
    {
        "indoor/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010113_474 =
    {
        "indoor/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010113_482 =
    {
        "cycling/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010113_483 =
    {
        "cycling/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010113_486 =
    {
        "freestyle/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010113_487 =
    {
        "freestyle/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010113_488 =
    {
        "indoor/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010113_489 =
    {
        "indoor/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

#define MANIFEST_DEFINITION_00010113_COUNT (490)
struct MANIFEST_DEFINITION *MANIFEST_DEFINITIONS_00010113[] = {
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_2,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_3,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_5,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_6,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_13,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_14,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_15,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_16,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_17,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_19,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_22,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_23,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_24,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_25,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_29,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_30,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_33,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_34,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_37,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_38,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_41,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_42,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_45,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_46,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_47,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_48,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_49,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_50,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_51,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_52,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_53,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_54,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_55,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_56,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_57,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_58,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_59,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_60,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_61,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_62,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_63,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_64,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_65,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_66,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_82,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_83,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_84,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_86,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_88,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_90,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_91,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_92,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_98,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_99,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_100,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_102,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_103,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_104,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_105,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_106,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_107,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_112,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_113,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_114,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_116,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_117,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_118,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_119,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_120,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_121,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_126,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_127,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_128,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_130,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_131,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_132,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_133,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_134,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_135,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_142,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_143,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_144,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_147,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_148,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_149,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_150,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_151,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_152,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_153,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_154,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_155,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_156,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_157,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_158,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_159,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_160,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_161,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_163,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_169,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_170,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_171,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_178,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_187,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_188,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_193,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_214,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_215,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_216,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_221,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_222,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_223,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_224,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_225,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_226,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_227,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_228,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_229,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_230,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_231,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_232,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_233,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_234,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_235,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_236,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_237,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_238,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_239,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_241,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_242,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_243,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_244,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_245,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_246,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_247,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_251,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_265,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_266,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_267,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_268,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_269,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_270,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_271,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_272,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_273,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_277,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_278,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_279,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_280,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_281,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_282,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_283,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_284,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_285,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_291,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_292,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_293,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_294,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_295,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_296,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_297,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_298,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_299,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_300,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_301,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_302,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_303,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_304,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_305,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_306,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_307,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_308,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_309,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_310,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_311,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_313,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_314,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_315,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_316,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_317,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_318,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_319,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_320,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_321,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_322,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_323,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_331,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_333,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_334,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_335,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_336,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_337,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_362,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_363,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_364,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_370,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_371,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_372,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_373,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_374,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_375,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_376,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_377,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_378,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_379,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_380,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_381,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_382,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_383,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_384,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_385,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_386,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_387,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_388,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_389,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_390,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_392,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_393,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_394,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_395,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_396,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_398,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_400,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_401,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_402,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_413,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_414,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_423,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_424,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_426,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_427,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_428,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_431,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_434,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_437,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_440,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_442,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_444,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_445,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_446,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_448,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_460,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_473,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_474,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_482,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_483,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_486,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_487,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_488,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010113_489,
};
