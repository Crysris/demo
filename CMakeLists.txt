cmake_minimum_required(VERSION 3.1)

project(demo)

# set c++ standard 11
set(cmake_cxx_standard_required on)
set(cmake_cxx_standard 11)

add_definitions(-std=c++11)


# specify the target name "demo"
ADD_EXECUTABLE(${PROJECT_NAME} Main.cpp)

# find all source files and add them to DIR_SRCS
aux_source_directory(. DIR_SRCS)

option(USE_MY_LIST)

if(USE_MY_LIST)
    # add sub directory "list"
    add_subdirectory(list)
    list(APPEND EXTRA_LIBS list)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR/list}")
endif()

# add link libraries "list"
target_link_libraries(${PROJECT_NAME} list)




