cmake_minimum_required(VERSION 3.10)
project(garmin_import)

set(CMAKE_CXX_STANDARD 11)

SET(CMAKE_CXX_FLAGS "-O2 -finline-functions -ffast-math -Wall -W -Werror")
SET(CMAKE_C_FLAGS "-O2 -finline-functions -ffast-math -Wall -W")


include_directories("ttwatch-master/include")
include_directories(ttwatch-master/src/protobuf)


include_directories("ttwatch-master/include/")
include_directories("ttwatch-master/src/protobuf")


set(CURL_LIBRARY "-lcurl")
find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})


include_directories("ttwatch-master/manifest/")
include_directories(protobuf-c)


file(GLOB ttwatch_src
        "ttwatch-master/src/export.c"
        "ttwatch-master/src/export_csv.c"
        "ttwatch-master/src/export_kml.c"
        "ttwatch-master/src/export_tcx.c"
        "ttwatch-master/src/export_gpx.c"
        "ttwatch-master/src/log.c"
        "ttwatch-master/src/protobuf.c"
        "ttwatch-master/src/cycling_cadence.c"
        "ttwatch-master/src/protobuf/activity_tracking.pb-c.c"

        )


find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

#include_directories(protobuf-c)
#link_directories(protobuf-c)
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

include_directories("pybind11/include/")


include(FindPerl)
if (!${PERL_FOUND})
    message(ERROR "Perl not found")
endif ()

set(MANIFEST_DIR ./ttwatch-master/manifest/)

add_custom_target(manifest
        DEPENDS manifest_definitions.h manifest_definitions_00010113.h manifest_definitions_0001082e.h manifest_definitions_0001031b.h manifest_definitions_0001073e.h)
add_custom_command(OUTPUT manifest_definitions.h
        DEPENDS ${MANIFEST_DIR}/manifest.txt ${MANIFEST_DIR}/make_manifest.pl
        COMMAND ${PERL_EXECUTABLE} ${MANIFEST_DIR}/make_manifest.pl < ${MANIFEST_DIR}/manifest.txt > manifest_definitions.h)

add_custom_command(OUTPUT manifest_definitions_00010113.h
        DEPENDS ${MANIFEST_DIR}/manifest_00010113.txt ${MANIFEST_DIR}/make_manifest.pl
        COMMAND ${PERL_EXECUTABLE} ${MANIFEST_DIR}/make_manifest.pl < ${MANIFEST_DIR}/manifest_00010113.txt > manifest_definitions_00010113.h)

add_custom_command(OUTPUT manifest_definitions_0001082e.h
        DEPENDS ${MANIFEST_DIR}/manifest_0001082e.txt ${MANIFEST_DIR}/make_manifest.pl
        COMMAND ${PERL_EXECUTABLE} ${MANIFEST_DIR}/make_manifest.pl < ${MANIFEST_DIR}/manifest_0001082e.txt > manifest_definitions_0001082e.h)

add_custom_command(OUTPUT manifest_definitions_0001031b.h
        DEPENDS ${MANIFEST_DIR}/manifest_0001031b.txt ${MANIFEST_DIR}/make_manifest.pl
        COMMAND ${PERL_EXECUTABLE} ${MANIFEST_DIR}/make_manifest.pl < ${MANIFEST_DIR}/manifest_0001031b.txt > manifest_definitions_0001031b.h)

add_custom_command(OUTPUT manifest_definitions_0001073e.h
        DEPENDS ${MANIFEST_DIR}/manifest_0001073e.txt ${MANIFEST_DIR}/make_manifest.pl
        COMMAND ${PERL_EXECUTABLE} ${MANIFEST_DIR}/make_manifest.pl < ${MANIFEST_DIR}/manifest_0001073e.txt > manifest_definitions_0001073e.h)


set_source_files_properties(protobuf-c/protobuf-c.c ttwatch-master/src/ttbin.c ${ttwatch_src} LANGUAGE C)

add_library(ttbin SHARED protobuf-c/protobuf-c.c tt_export.cc ${ttwatch_src} ttwatch-master/src/ttbin.c)
target_link_libraries(ttbin ${CURL_LIBRARIES} ${Protobuf_LIBRARIES})
