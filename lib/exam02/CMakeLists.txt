set(HEADER_FILES
        inc/map.h
        inc/node.h)

set(SOURCE_FILES
        src/map.cpp
        )
include_directories(inc)
add_library(exam02_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})