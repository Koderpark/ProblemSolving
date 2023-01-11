cmake_minimum_required(VERSION 3.22)
project(AlgorithmBOJ)

set(CMAKE_CXX_STANDARD 20)
set(EXCLUDE_PATHS "CMakeFiles")

file(GLOB_RECURSE SRC "*.cpp" "*.c")
foreach(TMP_PATH ${SRC})
    foreach(EXCLUDE_PATH ${EXCLUDE_PATHS})
        string(FIND ${TMP_PATH} ${EXCLUDE_PATH} RESULT)
        if(NOT ${RESULT} EQUAL -1)
            list(REMOVE_ITEM SRC ${TMP_PATH})
        endif()
    endforeach(EXCLUDE_PATH)
endforeach(TMP_PATH)

add_executable(source.cpp ${SRC})
