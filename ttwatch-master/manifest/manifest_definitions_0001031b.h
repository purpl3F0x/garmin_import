static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_0 =
    {
        "swimming/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_2 =
    {
        "options/demo", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_3 =
    {
        "options/units", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "km/kg"},
            {1, "miles/lbs"},
            {2, "km/lbs"},
            {3, "miles/kg"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_5 =
    {
        "options/weight", 1, MANIFEST_TYPE_INT, "g", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_6 =
    {
        "options/height", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_9 =
    {
        "options/lock", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_13 =
    {
        "options/language", 1, MANIFEST_TYPE_ENUM, 19,
        {
            {1, "english"},
            {2, "french"},
            {3, "german"},
            {4, "spanish"},
            {5, "italian"},
            {6, "chinese_cn"},
            {7, "chinese_tw"},
            {8, "czech"},
            {9, "danish"},
            {10, "finnish"},
            {11, "norwegian"},
            {12, "dutch"},
            {13, "portugese"},
            {14, "swedish"},
            {15, "polish"},
            {16, "japanese"},
            {17, "indonesian"},
            {18, "malay"},
            {19, "korean"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_14 =
    {
        "options/hrm", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "off"},
            {1, "external"},
            {2, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_15 =
    {
        "options/cadence", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_16 =
    {
        "running/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_17 =
    {
        "cycling/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_19 =
    {
        "treadmill/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_22 =
    {
        "options/dob_day", 1, MANIFEST_TYPE_INT, "", 1, 31
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_23 =
    {
        "options/dob_month", 1, MANIFEST_TYPE_INT, "", 1, 12
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_24 =
    {
        "options/dob_year", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_25 =
    {
        "options/gender", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "male"},
            {1, "female"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_29 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_30 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_33 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_34 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_37 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_38 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_41 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_42 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_45 =
    {
        "running/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_46 =
    {
        "running/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_47 =
    {
        "running/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_48 =
    {
        "running/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_49 =
    {
        "running/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_50 =
    {
        "running/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_51 =
    {
        "running/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_52 =
    {
        "running/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_53 =
    {
        "running/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_54 =
    {
        "cycling/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_55 =
    {
        "cycling/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_56 =
    {
        "cycling/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_57 =
    {
        "cycling/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_58 =
    {
        "cycling/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_59 =
    {
        "cycling/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_60 =
    {
        "cycling/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_61 =
    {
        "cycling/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_62 =
    {
        "cycling/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_63 =
    {
        "swimming/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_64 =
    {
        "swimming/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_65 =
    {
        "swimming/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_66 =
    {
        "swimming/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_82 =
    {
        "options/time_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "12hr"},
            {1, "24hr"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_83 =
    {
        "options/clock/alarm", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_86 =
    {
        "cycling/wheel_size", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_88 =
    {
        "swimming/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_90 =
    {
        "running/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_91 =
    {
        "cycling/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_92 =
    {
        "treadmill/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_98 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_99 =
    {
        "running/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_100 =
    {
        "running/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_102 =
    {
        "running/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_103 =
    {
        "running/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_104 =
    {
        "running/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_105 =
    {
        "running/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_106 =
    {
        "running/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_107 =
    {
        "running/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_112 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_113 =
    {
        "treadmill/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_114 =
    {
        "treadmill/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_116 =
    {
        "treadmill/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_117 =
    {
        "treadmill/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_118 =
    {
        "treadmill/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_119 =
    {
        "treadmill/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_120 =
    {
        "treadmill/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_121 =
    {
        "treadmill/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_126 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_127 =
    {
        "cycling/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_128 =
    {
        "cycling/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_130 =
    {
        "cycling/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_131 =
    {
        "cycling/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_132 =
    {
        "cycling/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_133 =
    {
        "cycling/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_134 =
    {
        "cycling/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_135 =
    {
        "cycling/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_142 =
    {
        "swimming/training/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_143 =
    {
        "swimming/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_144 =
    {
        "swimming/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_147 =
    {
        "swimming/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_148 =
    {
        "swimming/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_149 =
    {
        "swimming/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_150 =
    {
        "swimming/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_151 =
    {
        "swimming/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_152 =
    {
        "swimming/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_153 =
    {
        "swimming/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_154 =
    {
        "swimming/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_155 =
    {
        "treadmill/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_156 =
    {
        "treadmill/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_157 =
    {
        "treadmill/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_158 =
    {
        "treadmill/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_159 =
    {
        "treadmill/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_160 =
    {
        "treadmill/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_161 =
    {
        "treadmill/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_163 =
    {
        "options/buzz", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_169 =
    {
        "options/utc_offset", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_170 =
    {
        "running/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_171 =
    {
        "cycling/training/zones/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "cadence"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_178 =
    {
        "options/night_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_187 =
    {
        "cycling/training/zones/cadence/cadence", 1, MANIFEST_TYPE_INT, "rpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_188 =
    {
        "cycling/training/zones/cadence/variation", 1, MANIFEST_TYPE_INT, "rpm", 0, 100
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_193 =
    {
        "treadmill/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_214 =
    {
        "swimming/pool_size", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_215 =
    {
        "treadmill/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_216 =
    {
        "treadmill/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_221 =
    {
        "running/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_222 =
    {
        "running/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_223 =
    {
        "running/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_224 =
    {
        "running/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_225 =
    {
        "cycling/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_226 =
    {
        "cycling/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_227 =
    {
        "cycling/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_228 =
    {
        "cycling/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_229 =
    {
        "treadmill/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_230 =
    {
        "treadmill/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_231 =
    {
        "treadmill/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_232 =
    {
        "treadmill/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_233 =
    {
        "swimming/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_234 =
    {
        "swimming/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_235 =
    {
        "swimming/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_236 =
    {
        "swimming/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_237 =
    {
        "swimming/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_238 =
    {
        "running/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_239 =
    {
        "cycling/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_241 =
    {
        "treadmill/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_242 =
    {
        "running/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_243 =
    {
        "running/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_244 =
    {
        "cycling/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_245 =
    {
        "cycling/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_246 =
    {
        "treadmill/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_247 =
    {
        "treadmill/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_251 =
    {
        "options/flight_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_265 =
    {
        "running/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_266 =
    {
        "running/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_267 =
    {
        "treadmill/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_268 =
    {
        "treadmill/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_269 =
    {
        "cycling/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_270 =
    {
        "cycling/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_271 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_272 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_273 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_277 =
    {
        "running/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_278 =
    {
        "running/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_279 =
    {
        "cycling/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_280 =
    {
        "cycling/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_281 =
    {
        "treadmill/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_282 =
    {
        "treadmill/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_283 =
    {
        "freestyle/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_284 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_285 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_291 =
    {
        "freestyle/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_292 =
    {
        "freestyle/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_293 =
    {
        "freestyle/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_294 =
    {
        "freestyle/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_295 =
    {
        "freestyle/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_296 =
    {
        "freestyle/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_297 =
    {
        "freestyle/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_298 =
    {
        "freestyle/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_299 =
    {
        "freestyle/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_300 =
    {
        "freestyle/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_301 =
    {
        "freestyle/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_302 =
    {
        "freestyle/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_303 =
    {
        "freestyle/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_304 =
    {
        "freestyle/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_305 =
    {
        "freestyle/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_306 =
    {
        "freestyle/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_307 =
    {
        "freestyle/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_308 =
    {
        "freestyle/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_309 =
    {
        "freestyle/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_310 =
    {
        "freestyle/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_311 =
    {
        "freestyle/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 1, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_313 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_314 =
    {
        "freestyle/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_315 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_316 =
    {
        "freestyle/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_317 =
    {
        "freestyle/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_318 =
    {
        "freestyle/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_319 =
    {
        "freestyle/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_320 =
    {
        "freestyle/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_321 =
    {
        "freestyle/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_322 =
    {
        "freestyle/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_323 =
    {
        "freestyle/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_331 =
    {
        "options/tracker", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {1, "on"},
            {2, "off"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_333 =
    {
        "options/tracker/goals/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "time"},
            {1, "steps"},
            {2, "calories"},
            {3, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_334 =
    {
        "options/tracker/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_335 =
    {
        "options/tracker/goals/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_336 =
    {
        "options/tracker/goals/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_337 =
    {
        "options/tracker/goals/steps", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_362 =
    {
        "indoor/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_363 =
    {
        "indoor/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 11,
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_364 =
    {
        "indoor/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 11,
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_370 =
    {
        "indoor/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_371 =
    {
        "indoor/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_372 =
    {
        "indoor/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_373 =
    {
        "indoor/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_374 =
    {
        "indoor/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_375 =
    {
        "indoor/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_376 =
    {
        "indoor/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_377 =
    {
        "indoor/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_378 =
    {
        "indoor/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_379 =
    {
        "indoor/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_380 =
    {
        "indoor/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_381 =
    {
        "indoor/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_382 =
    {
        "indoor/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_383 =
    {
        "indoor/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_384 =
    {
        "indoor/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_385 =
    {
        "indoor/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_386 =
    {
        "indoor/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_387 =
    {
        "indoor/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_388 =
    {
        "indoor/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_389 =
    {
        "indoor/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_390 =
    {
        "indoor/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_392 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_393 =
    {
        "indoor/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_394 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_395 =
    {
        "indoor/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_396 =
    {
        "indoor/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_398 =
    {
        "indoor/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_400 =
    {
        "indoor/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_401 =
    {
        "indoor/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_402 =
    {
        "indoor/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_413 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_414 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_423 =
    {
        "gym/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_424 =
    {
        "gym/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_426 =
    {
        "gym/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_427 =
    {
        "gym/training/laps/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_428 =
    {
        "gym/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_431 =
    {
        "gym/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_434 =
    {
        "gym/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_437 =
    {
        "gym/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_440 =
    {
        "gym/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_442 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_444 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_445 =
    {
        "gym/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_446 =
    {
        "gym/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_448 =
    {
        "gym/training/goals/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_460 =
    {
        "options/tracker/sleep", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_465 =
    {
        "running/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_466 =
    {
        "running/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_467 =
    {
        "cycling/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_468 =
    {
        "cycling/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_469 =
    {
        "treadmill/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_470 =
    {
        "treadmill/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_471 =
    {
        "freestyle/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_472 =
    {
        "freestyle/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_473 =
    {
        "indoor/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001031b_474 =
    {
        "indoor/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001031b_482 =
    {
        "cycling/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001031b_483 =
    {
        "cycling/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001031b_486 =
    {
        "freestyle/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001031b_487 =
    {
        "freestyle/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001031b_488 =
    {
        "indoor/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001031b_489 =
    {
        "indoor/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_521 =
    {
        "running/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_522 =
    {
        "cycling/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_523 =
    {
        "swimming/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_524 =
    {
        "treadmill/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_525 =
    {
        "freestyle/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001031b_526 =
    {
        "indoor/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

#define MANIFEST_DEFINITION_0001031b_COUNT (527)
struct MANIFEST_DEFINITION *MANIFEST_DEFINITIONS_0001031b[] = {
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_2,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_3,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_5,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_6,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_9,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_13,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_14,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_15,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_16,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_17,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_19,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_22,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_23,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_24,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_25,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_29,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_30,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_33,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_34,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_37,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_38,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_41,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_42,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_45,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_46,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_47,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_48,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_49,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_50,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_51,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_52,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_53,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_54,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_55,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_56,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_57,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_58,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_59,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_60,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_61,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_62,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_63,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_64,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_65,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_66,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_82,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_83,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_86,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_88,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_90,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_91,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_92,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_98,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_99,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_100,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_102,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_103,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_104,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_105,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_106,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_107,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_112,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_113,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_114,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_116,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_117,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_118,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_119,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_120,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_121,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_126,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_127,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_128,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_130,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_131,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_132,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_133,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_134,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_135,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_142,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_143,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_144,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_147,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_148,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_149,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_150,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_151,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_152,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_153,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_154,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_155,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_156,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_157,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_158,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_159,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_160,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_161,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_163,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_169,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_170,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_171,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_178,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_187,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_188,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_193,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_214,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_215,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_216,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_221,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_222,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_223,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_224,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_225,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_226,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_227,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_228,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_229,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_230,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_231,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_232,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_233,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_234,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_235,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_236,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_237,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_238,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_239,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_241,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_242,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_243,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_244,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_245,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_246,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_247,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_251,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_265,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_266,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_267,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_268,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_269,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_270,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_271,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_272,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_273,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_277,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_278,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_279,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_280,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_281,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_282,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_283,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_284,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_285,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_291,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_292,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_293,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_294,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_295,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_296,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_297,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_298,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_299,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_300,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_301,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_302,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_303,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_304,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_305,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_306,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_307,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_308,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_309,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_310,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_311,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_313,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_314,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_315,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_316,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_317,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_318,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_319,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_320,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_321,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_322,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_323,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_331,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_333,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_334,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_335,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_336,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_337,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_362,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_363,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_364,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_370,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_371,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_372,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_373,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_374,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_375,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_376,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_377,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_378,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_379,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_380,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_381,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_382,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_383,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_384,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_385,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_386,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_387,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_388,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_389,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_390,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_392,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_393,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_394,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_395,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_396,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_398,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_400,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_401,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_402,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_413,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_414,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_423,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_424,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_426,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_427,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_428,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_431,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_434,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_437,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_440,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_442,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_444,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_445,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_446,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_448,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_460,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_465,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_466,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_467,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_468,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_469,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_470,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_471,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_472,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_473,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_474,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_482,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_483,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_486,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_487,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_488,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_489,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_521,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_522,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_523,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_524,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_525,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001031b_526,
};
