set(HEADER_FILES
        inc/data_structure.h
        inc/node.h
        )

set(SOURCE_FILES
        src/data_structure.cpp
        )
include_directories(inc)
add_library(exam3A_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})