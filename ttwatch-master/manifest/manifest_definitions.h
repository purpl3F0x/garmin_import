static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_2 =
    {
        "options/demo", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_3 =
    {
        "options/units", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "km/kg"},
            {1, "miles/lbs"},
            {2, "km/lbs"},
            {3, "miles/kg"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_5 =
    {
        "options/weight", 1, MANIFEST_TYPE_INT, "g", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_6 =
    {
        "options/height", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_9 =
    {
        "options/lock", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_13 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_14 =
    {
        "options/hrm", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_15 =
    {
        "options/cadence", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_16 =
    {
        "running/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_17 =
    {
        "cycling/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_19 =
    {
        "treadmill/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_22 =
    {
        "options/dob_day", 1, MANIFEST_TYPE_INT, "", 1, 31
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_23 =
    {
        "options/dob_month", 1, MANIFEST_TYPE_INT, "", 1, 12
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_24 =
    {
        "options/dob_year", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_25 =
    {
        "options/gender", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "male"},
            {1, "female"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_29 =
    {
        "treadmill/metrics/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_30 =
    {
        "treadmill/metrics/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_33 =
    {
        "running/metrics/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_34 =
    {
        "running/metrics/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_37 =
    {
        "cycling/metrics/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_38 =
    {
        "cycling/metrics/right", 1, MANIFEST_TYPE_ENUM, 11,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "cadence"},
            {8, "calories"},
            {9, "heart"},
            {10, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_41 =
    {
        "swimming/metrics/right", 1, MANIFEST_TYPE_ENUM, 8,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "avg_speed"},
            {5, "lengths"},
            {6, "swolf"},
            {7, "strokes"},
            {8, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_42 =
    {
        "swimming/metrics/left", 1, MANIFEST_TYPE_ENUM, 8,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {4, "avg_speed"},
            {5, "lengths"},
            {6, "swolf"},
            {7, "strokes"},
            {8, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_45 =
    {
        "running/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_46 =
    {
        "running/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_47 =
    {
        "running/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_48 =
    {
        "running/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_49 =
    {
        "running/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_50 =
    {
        "running/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_51 =
    {
        "running/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_52 =
    {
        "running/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_53 =
    {
        "running/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_54 =
    {
        "cycling/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_55 =
    {
        "cycling/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_56 =
    {
        "cycling/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_57 =
    {
        "cycling/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_58 =
    {
        "cycling/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_59 =
    {
        "cycling/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_60 =
    {
        "cycling/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_61 =
    {
        "cycling/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_62 =
    {
        "cycling/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_63 =
    {
        "swimming/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_64 =
    {
        "swimming/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_65 =
    {
        "swimming/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_66 =
    {
        "swimming/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_82 =
    {
        "options/time_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "12hr"},
            {1, "24hr"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_84 =
    {
        "options/click", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "off"},
            {1, "click+bz"},
            {2, "click"},
            {3, "buzz"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_86 =
    {
        "cycling/wheel_size", 1, MANIFEST_TYPE_INT, "mm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_88 =
    {
        "swimming/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_90 =
    {
        "running/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_91 =
    {
        "cycling/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_92 =
    {
        "treadmill/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_98 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_99 =
    {
        "running/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_100 =
    {
        "running/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_102 =
    {
        "running/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_103 =
    {
        "running/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_104 =
    {
        "running/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_105 =
    {
        "running/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_106 =
    {
        "running/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_107 =
    {
        "running/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_112 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_113 =
    {
        "treadmill/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_114 =
    {
        "treadmill/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_116 =
    {
        "treadmill/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_117 =
    {
        "treadmill/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_118 =
    {
        "treadmill/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_119 =
    {
        "treadmill/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_120 =
    {
        "treadmill/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_121 =
    {
        "treadmill/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_126 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_127 =
    {
        "cycling/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_128 =
    {
        "cycling/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_130 =
    {
        "cycling/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_131 =
    {
        "cycling/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_132 =
    {
        "cycling/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_133 =
    {
        "cycling/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_134 =
    {
        "cycling/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_135 =
    {
        "cycling/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_142 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_143 =
    {
        "swimming/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_144 =
    {
        "swimming/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_147 =
    {
        "swimming/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_148 =
    {
        "swimming/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_149 =
    {
        "swimming/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_150 =
    {
        "swimming/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_151 =
    {
        "swimming/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_152 =
    {
        "swimming/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_153 =
    {
        "swimming/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_154 =
    {
        "swimming/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_155 =
    {
        "treadmill/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_156 =
    {
        "treadmill/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_157 =
    {
        "treadmill/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_158 =
    {
        "treadmill/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_159 =
    {
        "treadmill/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_160 =
    {
        "treadmill/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_161 =
    {
        "treadmill/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_169 =
    {
        "options/utc_offset", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_170 =
    {
        "running/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_171 =
    {
        "cycling/training/zones/type", 1, MANIFEST_TYPE_ENUM, 4,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "cadence"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_178 =
    {
        "options/night_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010819_183 =
    {
        "cycling/training/zones/speed/speed", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_184 =
    {
        "cycling/training/zones/speed/variation", 1, MANIFEST_TYPE_INT, "%", 0, 100
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_187 =
    {
        "cycling/training/zones/cadence/cadence", 1, MANIFEST_TYPE_INT, "rpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_188 =
    {
        "cycling/training/zones/cadence/variation", 1, MANIFEST_TYPE_INT, "%", 0, 100
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_193 =
    {
        "treadmill/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {3, "speed"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_214 =
    {
        "swimming/pool_size", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_215 =
    {
        "treadmill/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_216 =
    {
        "treadmill/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_221 =
    {
        "running/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_222 =
    {
        "running/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_223 =
    {
        "running/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_224 =
    {
        "running/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_225 =
    {
        "cycling/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_226 =
    {
        "cycling/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_227 =
    {
        "cycling/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_228 =
    {
        "cycling/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_229 =
    {
        "treadmill/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_230 =
    {
        "treadmill/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_231 =
    {
        "treadmill/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_232 =
    {
        "treadmill/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_233 =
    {
        "swimming/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_234 =
    {
        "swimming/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_235 =
    {
        "swimming/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_236 =
    {
        "swimming/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_237 =
    {
        "swimming/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_238 =
    {
        "running/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_239 =
    {
        "cycling/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_241 =
    {
        "treadmill/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_242 =
    {
        "running/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_243 =
    {
        "running/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_244 =
    {
        "cycling/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_245 =
    {
        "cycling/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_246 =
    {
        "treadmill/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_247 =
    {
        "treadmill/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_251 =
    {
        "options/flight_mode", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "off"},
            {1, "on"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_265 =
    {
        "running/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_266 =
    {
        "running/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_267 =
    {
        "treadmill/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_268 =
    {
        "treadmill/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_269 =
    {
        "cycling/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_270 =
    {
        "cycling/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_271 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_272 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_273 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_277 =
    {
        "running/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_278 =
    {
        "running/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_279 =
    {
        "cycling/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_280 =
    {
        "cycling/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_281 =
    {
        "treadmill/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_282 =
    {
        "treadmill/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_283 =
    {
        "freestyle/metrics/speed_type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "speed"},
            {1, "pace"},
            {2, "both"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_284 =
    {
        "freestyle/metrics/display/left", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_285 =
    {
        "freestyle/metrics/display/right", 1, MANIFEST_TYPE_ENUM, 10,
        {
            {0, "clock"},
            {1, "duration"},
            {2, "distance"},
            {3, "pace"},
            {4, "avg_pace"},
            {5, "speed"},
            {6, "avg_speed"},
            {7, "calories"},
            {8, "heart"},
            {9, "hr_zone"},
        }
    };

static const struct MANIFEST_FLOAT_DEFINITION MANIFEST_ENTRY_00010819_289 =
    {
        "freestyle/training/zones/speed/speed", 1, MANIFEST_TYPE_FLOAT, "m/s", 100.000000f, 0.0f, 4294967.295f
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_290 =
    {
        "freestyle/training/zones/speed/variation", 1, MANIFEST_TYPE_INT, "%", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_291 =
    {
        "freestyle/training/zones/pace/low", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_292 =
    {
        "freestyle/training/zones/pace/high", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_293 =
    {
        "freestyle/training/goals/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_294 =
    {
        "freestyle/training/goals/time", 1, MANIFEST_TYPE_INT, "min", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_295 =
    {
        "freestyle/training/goals/calories", 1, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_296 =
    {
        "freestyle/training/laps/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_297 =
    {
        "freestyle/training/laps/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_298 =
    {
        "freestyle/training/laps/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "time"},
            {1, "distance"},
            {2, "manual"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_299 =
    {
        "freestyle/training/intervals/warmup/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_300 =
    {
        "freestyle/training/intervals/warmup/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_301 =
    {
        "freestyle/training/intervals/warmup/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_302 =
    {
        "freestyle/training/intervals/work/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_303 =
    {
        "freestyle/training/intervals/work/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_304 =
    {
        "freestyle/training/intervals/work/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_305 =
    {
        "freestyle/training/intervals/rest/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_306 =
    {
        "freestyle/training/intervals/rest/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_307 =
    {
        "freestyle/training/intervals/rest/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_308 =
    {
        "freestyle/training/intervals/cooldown/time", 1, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_309 =
    {
        "freestyle/training/intervals/cooldown/distance", 1, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_310 =
    {
        "freestyle/training/intervals/cooldown/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "time"},
            {1, "distance"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_311 =
    {
        "freestyle/training/intervals/sets", 1, MANIFEST_TYPE_INT, "", 1, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_313 =
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

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_314 =
    {
        "freestyle/training/race/type", 1, MANIFEST_TYPE_ENUM, 2,
        {
            {0, "recent"},
            {1, "mysports"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_315 =
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

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_316 =
    {
        "freestyle/training/zones/heart/custom/low", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_317 =
    {
        "freestyle/training/zones/heart/custom/high", 1, MANIFEST_TYPE_INT, "bpm", 0, 4294967295ul
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_318 =
    {
        "freestyle/training/zones/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "pace"},
            {1, "heart"},
            {2, "speed"},
        }
    };

static const struct MANIFEST_ENUM_DEFINITION MANIFEST_ENTRY_00010819_319 =
    {
        "freestyle/training/goals/type", 1, MANIFEST_TYPE_ENUM, 3,
        {
            {0, "distance"},
            {1, "time"},
            {2, "calories"},
        }
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_320 =
    {
        "freestyle/training/race/recent/distance", 0, MANIFEST_TYPE_INT, "m", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_321 =
    {
        "freestyle/training/race/recent/time", 0, MANIFEST_TYPE_INT, "s", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_322 =
    {
        "freestyle/training/race/recent/file", 0, MANIFEST_TYPE_INT, "", 0, 4294967295ul
    };

static const struct MANIFEST_INT_DEFINITION MANIFEST_ENTRY_00010819_323 =
    {
        "freestyle/training/race/mysports", 1, MANIFEST_TYPE_INT, "", 0, 4
    };

#define MANIFEST_DEFINITION_00010819_COUNT (324)
struct MANIFEST_DEFINITION *MANIFEST_DEFINITIONS_00010819[] = {
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_2,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_3,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_5,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_6,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_9,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_13,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_14,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_15,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_16,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_17,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_19,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_22,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_23,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_24,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_25,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_29,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_30,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_33,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_34,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_37,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_38,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_41,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_42,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_45,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_46,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_47,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_48,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_49,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_50,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_51,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_52,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_53,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_54,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_55,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_56,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_57,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_58,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_59,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_60,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_61,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_62,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_63,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_64,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_65,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_66,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_82,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_84,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_86,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_88,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_90,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_91,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_92,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_98,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_99,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_100,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_102,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_103,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_104,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_105,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_106,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_107,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_112,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_113,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_114,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_116,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_117,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_118,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_119,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_120,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_121,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_126,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_127,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_128,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_130,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_131,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_132,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_133,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_134,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_135,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_142,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_143,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_144,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_147,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_148,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_149,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_150,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_151,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_152,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_153,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_154,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_155,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_156,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_157,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_158,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_159,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_160,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_161,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_169,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_170,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_171,
    0,
    0,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_178,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_183,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_184,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_187,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_188,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_193,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_214,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_215,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_216,
    0,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_221,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_222,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_223,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_224,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_225,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_226,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_227,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_228,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_229,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_230,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_231,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_232,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_233,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_234,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_235,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_236,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_237,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_238,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_239,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_241,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_242,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_243,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_244,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_245,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_246,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_247,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_251,
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
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_265,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_266,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_267,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_268,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_269,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_270,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_271,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_272,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_273,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_277,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_278,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_279,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_280,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_281,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_282,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_283,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_284,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_285,
    0,
    0,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_289,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_290,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_291,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_292,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_293,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_294,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_295,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_296,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_297,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_298,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_299,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_300,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_301,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_302,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_303,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_304,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_305,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_306,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_307,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_308,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_309,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_310,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_311,
    0,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_313,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_314,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_315,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_316,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_317,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_318,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_319,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_320,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_321,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_322,
    (struct MANIFEST_DEFINITION *) &MANIFEST_ENTRY_00010819_323,
};
