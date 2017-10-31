set(HEADER_FILES
        inc/ordered_linkedlist.h
        inc/node.h
        )

set(SOURCE_FILES
        src/ordered_linkedlist.cpp
        src/node.cpp
        )
include_directories(inc)
add_library(exam02_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})