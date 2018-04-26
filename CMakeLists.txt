cmake_minimum_required(VERSION 3.11)
project(basic_plus)

set(CMAKE_CXX_STANDARD 11)

add_executable(basic_plus root.cpp)

# function name // argument 1 , 2 , 3
MACRO(get_sub_dir_glob result curdir globname)

    FILE(GLOB children RELATIVE ${curdir} ${curdir}/${globname})
    SET(dirlist "") # temp value ( "" "list1" "list2" .... )

    FOREACH(child ${children})
        IF(IS_DIRECTORY ${curdir}/${child})
            LIST(APPEND dirlist ${child})
        ENDIF()
    ENDFOREACH()

    SET(${result} ${dirlist})
ENDMACRO()

get_sub_dir_glob(SUBDIRS ${PROJECT_SOURCE_DIR} listing*)

FOREACH(subdir ${SUBDIRS})
    ADD_SUBDIRECTORY(${subdir})
ENDFOREACH()
