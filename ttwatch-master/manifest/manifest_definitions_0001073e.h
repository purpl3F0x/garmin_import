static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_0 =
    {
        "swimming/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_2 =
    {
        "options/demo", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_3 =
    {
        "options/units", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "km/kg"},
            {1, "miles/lbs"},
            {2, "km/lbs"},
            {3, "miles/kg"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_5 =
    {
        "options/weight", 1, MANIFEST_TYPE_INT, "g", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_6 =
    {
        "options/height", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_9 =
    {
        "options/lock", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_13 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_14 =
    {
        "options/hrm", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "off"},
            {1, "external"},
            {2, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_15 =
    {
        "options/cadence", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_16 =
    {
        "running/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_17 =
    {
        "cycling/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_19 =
    {
        "treadmill/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_22 =
    {
        "options/dob_day", 1, MANIFEST_TYPE_INT, "", 1, 31
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_23 =
    {
        "options/dob_month", 1, MANIFEST_TYPE_INT, "", 1, 12
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_24 =
    {
        "options/dob_year", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_25 =
    {
        "options/gender", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "male"},
            {1, "female"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_29 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_30 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_33 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_34 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_37 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_38 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_41 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_42 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_45 =
    {
        "running/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_46 =
    {
        "running/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_47 =
    {
        "running/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_48 =
    {
        "running/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_49 =
    {
        "running/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_50 =
    {
        "running/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_51 =
    {
        "running/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_52 =
    {
        "running/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_53 =
    {
        "running/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_54 =
    {
        "cycling/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_55 =
    {
        "cycling/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_56 =
    {
        "cycling/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_57 =
    {
        "cycling/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_58 =
    {
        "cycling/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_59 =
    {
        "cycling/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_60 =
    {
        "cycling/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_61 =
    {
        "cycling/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_62 =
    {
        "cycling/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_63 =
    {
        "swimming/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_64 =
    {
        "swimming/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_65 =
    {
        "swimming/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_66 =
    {
        "swimming/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_82 =
    {
        "options/time_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "12hr"},
            {1, "24hr"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_83 =
    {
        "options/clock/alarm", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_86 =
    {
        "cycling/wheel_size", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_88 =
    {
        "swimming/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_90 =
    {
        "running/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_91 =
    {
        "cycling/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_92 =
    {
        "treadmill/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_98 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_99 =
    {
        "running/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_100 =
    {
        "running/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_102 =
    {
        "running/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_103 =
    {
        "running/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_104 =
    {
        "running/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_105 =
    {
        "running/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_106 =
    {
        "running/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_107 =
    {
        "running/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_112 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_113 =
    {
        "treadmill/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_114 =
    {
        "treadmill/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_116 =
    {
        "treadmill/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_117 =
    {
        "treadmill/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_118 =
    {
        "treadmill/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_119 =
    {
        "treadmill/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_120 =
    {
        "treadmill/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_121 =
    {
        "treadmill/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_126 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_127 =
    {
        "cycling/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_128 =
    {
        "cycling/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_130 =
    {
        "cycling/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_131 =
    {
        "cycling/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_132 =
    {
        "cycling/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_133 =
    {
        "cycling/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_134 =
    {
        "cycling/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_135 =
    {
        "cycling/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_142 =
    {
        "swimming/training/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "none"},
            {1, "goals"},
            {2, "intervals"},
            {3, "laps"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_143 =
    {
        "swimming/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_144 =
    {
        "swimming/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_147 =
    {
        "swimming/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_148 =
    {
        "swimming/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_149 =
    {
        "swimming/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_150 =
    {
        "swimming/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_151 =
    {
        "swimming/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_152 =
    {
        "swimming/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_153 =
    {
        "swimming/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_154 =
    {
        "swimming/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_155 =
    {
        "treadmill/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_156 =
    {
        "treadmill/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_157 =
    {
        "treadmill/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_158 =
    {
        "treadmill/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_159 =
    {
        "treadmill/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_160 =
    {
        "treadmill/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_161 =
    {
        "treadmill/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_163 =
    {
        "options/buzz", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_169 =
    {
        "options/utc_offset", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_170 =
    {
        "running/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_171 =
    {
        "cycling/training/zones/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "cadence"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_178 =
    {
        "options/night_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_187 =
    {
        "cycling/training/zones/cadence/cadence", 1, MANIFEST_TYPE_INT, "rpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_188 =
    {
        "cycling/training/zones/cadence/variation", 1, MANIFEST_TYPE_INT, "rpm", 0, 100
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_193 =
    {
        "treadmill/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_214 =
    {
        "swimming/pool_size", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_215 =
    {
        "treadmill/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_216 =
    {
        "treadmill/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_221 =
    {
        "running/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_222 =
    {
        "running/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_223 =
    {
        "running/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_224 =
    {
        "running/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_225 =
    {
        "cycling/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_226 =
    {
        "cycling/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_227 =
    {
        "cycling/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_228 =
    {
        "cycling/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_229 =
    {
        "treadmill/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_230 =
    {
        "treadmill/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_231 =
    {
        "treadmill/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_232 =
    {
        "treadmill/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_233 =
    {
        "swimming/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_234 =
    {
        "swimming/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_235 =
    {
        "swimming/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_236 =
    {
        "swimming/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_237 =
    {
        "swimming/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_238 =
    {
        "running/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_239 =
    {
        "cycling/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_241 =
    {
        "treadmill/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_242 =
    {
        "running/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_243 =
    {
        "running/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_244 =
    {
        "cycling/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_245 =
    {
        "cycling/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_246 =
    {
        "treadmill/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_247 =
    {
        "treadmill/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_251 =
    {
        "options/flight_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_265 =
    {
        "running/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_266 =
    {
        "running/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_267 =
    {
        "treadmill/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_268 =
    {
        "treadmill/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_269 =
    {
        "cycling/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_270 =
    {
        "cycling/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_271 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_272 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_273 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_277 =
    {
        "running/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_278 =
    {
        "running/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_279 =
    {
        "cycling/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_280 =
    {
        "cycling/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_281 =
    {
        "treadmill/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_282 =
    {
        "treadmill/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_283 =
    {
        "freestyle/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_284 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_285 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_291 =
    {
        "freestyle/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_292 =
    {
        "freestyle/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_293 =
    {
        "freestyle/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_294 =
    {
        "freestyle/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_295 =
    {
        "freestyle/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_296 =
    {
        "freestyle/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_297 =
    {
        "freestyle/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_298 =
    {
        "freestyle/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_299 =
    {
        "freestyle/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_300 =
    {
        "freestyle/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_301 =
    {
        "freestyle/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_302 =
    {
        "freestyle/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_303 =
    {
        "freestyle/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_304 =
    {
        "freestyle/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_305 =
    {
        "freestyle/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_306 =
    {
        "freestyle/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_307 =
    {
        "freestyle/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_308 =
    {
        "freestyle/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_309 =
    {
        "freestyle/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_310 =
    {
        "freestyle/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_311 =
    {
        "freestyle/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 1, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_313 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_314 =
    {
        "freestyle/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_315 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_316 =
    {
        "freestyle/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_317 =
    {
        "freestyle/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_318 =
    {
        "freestyle/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_319 =
    {
        "freestyle/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_320 =
    {
        "freestyle/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_321 =
    {
        "freestyle/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_322 =
    {
        "freestyle/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_323 =
    {
        "freestyle/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_331 =
    {
        "options/tracker", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {1, "on"},
            {2, "off"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_332 =
    {
        "options/start_of_week", 1, MANIFEST_TYPE_ENUM, 7,
        {
            {0, "sunday"},
            {1, "monday"},
            {2, "tuesday"},
            {3, "wednesday"},
            {4, "thursday"},
            {5, "friday"},
            {6, "saturday"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_333 =
    {
        "options/tracker/goals/type", 1, MANIFEST_TYPE_ENUM, 5,
        {
            {0, "time"},
            {1, "steps"},
            {2, "calories"},
            {3, "distance"},
            {6, "points"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_334 =
    {
        "options/tracker/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_335 =
    {
        "options/tracker/goals/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_336 =
    {
        "options/tracker/goals/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_337 =
    {
        "options/tracker/goals/steps", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_362 =
    {
        "indoor/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_363 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_364 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_370 =
    {
        "indoor/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_371 =
    {
        "indoor/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_372 =
    {
        "indoor/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_373 =
    {
        "indoor/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_374 =
    {
        "indoor/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_375 =
    {
        "indoor/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_376 =
    {
        "indoor/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_377 =
    {
        "indoor/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_378 =
    {
        "indoor/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_379 =
    {
        "indoor/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_380 =
    {
        "indoor/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_381 =
    {
        "indoor/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_382 =
    {
        "indoor/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_383 =
    {
        "indoor/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_384 =
    {
        "indoor/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_385 =
    {
        "indoor/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_386 =
    {
        "indoor/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_387 =
    {
        "indoor/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_388 =
    {
        "indoor/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_389 =
    {
        "indoor/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_390 =
    {
        "indoor/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_392 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_393 =
    {
        "indoor/training/race/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "recent"},
            {1, "mysports"},
            {2, "custom"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_394 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_395 =
    {
        "indoor/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_396 =
    {
        "indoor/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_398 =
    {
        "indoor/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_400 =
    {
        "indoor/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_401 =
    {
        "indoor/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_402 =
    {
        "indoor/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_413 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_414 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_423 =
    {
        "gym/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_424 =
    {
        "gym/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_426 =
    {
        "gym/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_427 =
    {
        "gym/training/laps/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_428 =
    {
        "gym/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_431 =
    {
        "gym/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_434 =
    {
        "gym/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_437 =
    {
        "gym/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_440 =
    {
        "gym/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_442 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_444 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_445 =
    {
        "gym/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_446 =
    {
        "gym/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_448 =
    {
        "gym/training/goals/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_460 =
    {
        "options/tracker/sleep", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_465 =
    {
        "running/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_466 =
    {
        "running/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_467 =
    {
        "cycling/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_468 =
    {
        "cycling/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_469 =
    {
        "treadmill/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_470 =
    {
        "treadmill/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_471 =
    {
        "freestyle/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_472 =
    {
        "freestyle/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_473 =
    {
        "indoor/training/race/custom/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_0001073e_474 =
    {
        "indoor/training/race/custom/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001073e_482 =
    {
        "cycling/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001073e_483 =
    {
        "cycling/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001073e_486 =
    {
        "freestyle/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001073e_487 =
    {
        "freestyle/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001073e_488 =
    {
        "indoor/training/zones/speed/low", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_0001073e_489 =
    {
        "indoor/training/zones/speed/high", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_521 =
    {
        "running/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_522 =
    {
        "cycling/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_523 =
    {
        "swimming/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_524 =
    {
        "treadmill/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_525 =
    {
        "freestyle/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_0001073e_526 =
    {
        "indoor/splits", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

#define MANIFEST_DEFINITION_0001073e_COUNT (527)
struct MANIFEST_DEFINITION *MANIFEST_DEFINITIONS_0001073e[] = {
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_2,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_3,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_5,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_6,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_9,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_13,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_14,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_15,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_16,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_17,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_19,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_22,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_23,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_24,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_25,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_29,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_30,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_33,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_34,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_37,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_38,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_41,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_42,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_45,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_46,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_47,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_48,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_49,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_50,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_51,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_52,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_53,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_54,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_55,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_56,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_57,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_58,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_59,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_60,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_61,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_62,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_63,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_64,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_65,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_66,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_82,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_83,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_86,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_88,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_90,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_91,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_92,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_98,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_99,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_100,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_102,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_103,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_104,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_105,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_106,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_107,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_112,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_113,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_114,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_116,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_117,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_118,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_119,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_120,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_121,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_126,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_127,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_128,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_130,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_131,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_132,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_133,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_134,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_135,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_142,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_143,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_144,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_147,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_148,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_149,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_150,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_151,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_152,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_153,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_154,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_155,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_156,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_157,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_158,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_159,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_160,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_161,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_163,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_169,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_170,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_171,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_178,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_187,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_188,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_193,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_214,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_215,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_216,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_221,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_222,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_223,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_224,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_225,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_226,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_227,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_228,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_229,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_230,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_231,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_232,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_233,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_234,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_235,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_236,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_237,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_238,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_239,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_241,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_242,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_243,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_244,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_245,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_246,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_247,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_251,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_265,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_266,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_267,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_268,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_269,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_270,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_271,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_272,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_273,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_277,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_278,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_279,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_280,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_281,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_282,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_283,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_284,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_285,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_291,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_292,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_293,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_294,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_295,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_296,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_297,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_298,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_299,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_300,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_301,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_302,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_303,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_304,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_305,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_306,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_307,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_308,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_309,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_310,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_311,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_313,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_314,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_315,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_316,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_317,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_318,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_319,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_320,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_321,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_322,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_323,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_331,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_332,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_333,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_334,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_335,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_336,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_337,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_362,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_363,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_364,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_370,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_371,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_372,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_373,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_374,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_375,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_376,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_377,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_378,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_379,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_380,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_381,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_382,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_383,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_384,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_385,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_386,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_387,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_388,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_389,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_390,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_392,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_393,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_394,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_395,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_396,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_398,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_400,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_401,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_402,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_413,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_414,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_423,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_424,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_426,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_427,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_428,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_431,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_434,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_437,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_440,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_442,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_444,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_445,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_446,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_448,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_460,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_465,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_466,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_467,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_468,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_469,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_470,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_471,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_472,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_473,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_474,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_482,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_483,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_486,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_487,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_488,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_489,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_521,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_522,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_523,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_524,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_525,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_0001073e_526,
};
