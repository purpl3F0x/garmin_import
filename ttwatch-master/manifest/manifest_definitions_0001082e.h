static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_2 =
    {
        "options/demo", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_3 =
    {
        "options/units", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "km/kg"},
            {1, "miles/lbs"},
            {2, "km/lbs"},
            {3, "miles/kg"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_5 =
    {
        "options/weight", 1, MANIFEST_TYPE_INT, "g", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_6 =
    {
        "options/height", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_9 =
    {
        "options/lock", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_13 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_14 =
    {
        "options/hrm", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_15 =
    {
        "options/cadence", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_16 =
    {
        "running/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_17 =
    {
        "cycling/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_19 =
    {
        "treadmill/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_22 =
    {
        "options/dob_day", 1, MANIFEST_TYPE_INT, "", 1, 31
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_23 =
    {
        "options/dob_month", 1, MANIFEST_TYPE_INT, "", 1, 12
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_24 =
    {
        "options/dob_year", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_25 =
    {
        "options/gender", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "male"},
            {1, "female"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_29 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_30 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_33 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_34 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_37 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_38 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_41 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_42 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_45 =
    {
        "running/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_46 =
    {
        "running/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_47 =
    {
        "running/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_48 =
    {
        "running/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_49 =
    {
        "running/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_50 =
    {
        "running/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_51 =
    {
        "running/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_52 =
    {
        "running/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_53 =
    {
        "running/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_54 =
    {
        "cycling/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_55 =
    {
        "cycling/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_56 =
    {
        "cycling/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_57 =
    {
        "cycling/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_58 =
    {
        "cycling/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_59 =
    {
        "cycling/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_60 =
    {
        "cycling/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_61 =
    {
        "cycling/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_62 =
    {
        "cycling/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_63 =
    {
        "swimming/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_64 =
    {
        "swimming/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_65 =
    {
        "swimming/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_66 =
    {
        "swimming/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_82 =
    {
        "options/time_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "12hr"},
            {1, "24hr"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_84 =
    {
        "options/click", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_86 =
    {
        "cycling/wheel_size", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_88 =
    {
        "swimming/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_90 =
    {
        "running/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_91 =
    {
        "cycling/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_92 =
    {
        "treadmill/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_98 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_99 =
    {
        "running/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_100 =
    {
        "running/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_102 =
    {
        "running/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_103 =
    {
        "running/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_104 =
    {
        "running/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_105 =
    {
        "running/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_106 =
    {
        "running/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_107 =
    {
        "running/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_112 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_113 =
    {
        "treadmill/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_114 =
    {
        "treadmill/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_116 =
    {
        "treadmill/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_117 =
    {
        "treadmill/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_118 =
    {
        "treadmill/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_119 =
    {
        "treadmill/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_120 =
    {
        "treadmill/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_121 =
    {
        "treadmill/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_126 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_127 =
    {
        "cycling/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_128 =
    {
        "cycling/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_130 =
    {
        "cycling/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_131 =
    {
        "cycling/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_132 =
    {
        "cycling/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_133 =
    {
        "cycling/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_134 =
    {
        "cycling/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_135 =
    {
        "cycling/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_142 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_143 =
    {
        "swimming/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_144 =
    {
        "swimming/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_147 =
    {
        "swimming/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_148 =
    {
        "swimming/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_149 =
    {
        "swimming/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_150 =
    {
        "swimming/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_151 =
    {
        "swimming/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_152 =
    {
        "swimming/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_153 =
    {
        "swimming/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_154 =
    {
        "swimming/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_155 =
    {
        "treadmill/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_156 =
    {
        "treadmill/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_157 =
    {
        "treadmill/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_158 =
    {
        "treadmill/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_159 =
    {
        "treadmill/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_160 =
    {
        "treadmill/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_161 =
    {
        "treadmill/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_163 =
    {
        "options/buzz", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_169 =
    {
        "options/utc_offset", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_170 =
    {
        "running/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_171 =
    {
        "cycling/training/zones/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "cadence"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_178 =
    {
        "options/night_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001082e_183 =
    {
        "cycling/training/zones/speed/speed", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_184 =
    {
        "cycling/training/zones/speed/variation", 1, MANIFEST_TYPE_INT, "%", 0, 100
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_187 =
    {
        "cycling/training/zones/cadence/cadence", 1, MANIFEST_TYPE_INT, "rpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_188 =
    {
        "cycling/training/zones/cadence/variation", 1, MANIFEST_TYPE_INT, "%", 0, 100
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_193 =
    {
        "treadmill/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_214 =
    {
        "swimming/pool_size", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_215 =
    {
        "treadmill/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_216 =
    {
        "treadmill/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_221 =
    {
        "running/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_222 =
    {
        "running/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_223 =
    {
        "running/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_224 =
    {
        "running/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_225 =
    {
        "cycling/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_226 =
    {
        "cycling/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_227 =
    {
        "cycling/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_228 =
    {
        "cycling/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_229 =
    {
        "treadmill/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_230 =
    {
        "treadmill/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_231 =
    {
        "treadmill/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_232 =
    {
        "treadmill/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_233 =
    {
        "swimming/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_234 =
    {
        "swimming/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_235 =
    {
        "swimming/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_236 =
    {
        "swimming/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_237 =
    {
        "swimming/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_238 =
    {
        "running/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_239 =
    {
        "cycling/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_241 =
    {
        "treadmill/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_242 =
    {
        "running/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_243 =
    {
        "running/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_244 =
    {
        "cycling/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_245 =
    {
        "cycling/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_246 =
    {
        "treadmill/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_247 =
    {
        "treadmill/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_251 =
    {
        "options/flight_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_265 =
    {
        "running/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_266 =
    {
        "running/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_267 =
    {
        "treadmill/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_268 =
    {
        "treadmill/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_269 =
    {
        "cycling/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_270 =
    {
        "cycling/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_271 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_272 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_273 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_277 =
    {
        "running/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_278 =
    {
        "running/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_279 =
    {
        "cycling/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_280 =
    {
        "cycling/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_281 =
    {
        "treadmill/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_282 =
    {
        "treadmill/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_283 =
    {
        "freestyle/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_284 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_285 =
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

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001082e_289 =
    {
        "freestyle/training/zones/speed/speed", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_290 =
    {
        "freestyle/training/zones/speed/variation", 1, MANIFEST_TYPE_INT, "%", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_291 =
    {
        "freestyle/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_292 =
    {
        "freestyle/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_293 =
    {
        "freestyle/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_294 =
    {
        "freestyle/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_295 =
    {
        "freestyle/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_296 =
    {
        "freestyle/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_297 =
    {
        "freestyle/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_298 =
    {
        "freestyle/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_299 =
    {
        "freestyle/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_300 =
    {
        "freestyle/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_301 =
    {
        "freestyle/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_302 =
    {
        "freestyle/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_303 =
    {
        "freestyle/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_304 =
    {
        "freestyle/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_305 =
    {
        "freestyle/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_306 =
    {
        "freestyle/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_307 =
    {
        "freestyle/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_308 =
    {
        "freestyle/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_309 =
    {
        "freestyle/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_310 =
    {
        "freestyle/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_311 =
    {
        "freestyle/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 1, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_313 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_314 =
    {
        "freestyle/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_315 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_316 =
    {
        "freestyle/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_317 =
    {
        "freestyle/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_318 =
    {
        "freestyle/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001082e_319 =
    {
        "freestyle/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_320 =
    {
        "freestyle/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_321 =
    {
        "freestyle/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_322 =
    {
        "freestyle/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001082e_323 =
    {
        "freestyle/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

#define MANIFEST_DEFINITION_0001082e_COUNT (324)
struct MANIFEST_DEFINITION *MANIFEST_DEFINITIONS_0001082e[] = {
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_2,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_3,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_5,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_6,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_9,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_13,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_14,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_15,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_16,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_17,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_19,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_22,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_23,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_24,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_25,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_29,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_30,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_33,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_34,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_37,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_38,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_41,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_42,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_45,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_46,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_47,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_48,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_49,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_50,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_51,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_52,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_53,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_54,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_55,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_56,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_57,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_58,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_59,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_60,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_61,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_62,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_63,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_64,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_65,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_66,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_82,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_84,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_86,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_88,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_90,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_91,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_92,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_98,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_99,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_100,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_102,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_103,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_104,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_105,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_106,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_107,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_112,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_113,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_114,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_116,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_117,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_118,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_119,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_120,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_121,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_126,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_127,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_128,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_130,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_131,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_132,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_133,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_134,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_135,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_142,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_143,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_144,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_147,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_148,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_149,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_150,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_151,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_152,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_153,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_154,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_155,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_156,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_157,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_158,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_159,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_160,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_161,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_163,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_169,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_170,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_171,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_178,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_183,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_184,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_187,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_188,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_193,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_214,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_215,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_216,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_221,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_222,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_223,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_224,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_225,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_226,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_227,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_228,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_229,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_230,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_231,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_232,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_233,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_234,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_235,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_236,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_237,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_238,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_239,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_241,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_242,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_243,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_244,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_245,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_246,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_247,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_251,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_265,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_266,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_267,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_268,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_269,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_270,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_271,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_272,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_273,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_277,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_278,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_279,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_280,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_281,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_282,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_283,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_284,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_285,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_289,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_290,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_291,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_292,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_293,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_294,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_295,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_296,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_297,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_298,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_299,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_300,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_301,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_302,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_303,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_304,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_305,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_306,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_307,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_308,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_309,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_310,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_311,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_313,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_314,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_315,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_316,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_317,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_318,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_319,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_320,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_321,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_322,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001082e_323,
};
