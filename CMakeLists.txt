cmake_minimum_required(VERSION 3.1)

project(demo)

# set c++ standard 11
#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set c++ standard 11
add_definitions(-std=c++11)


# specify the target name "demo"
ADD_EXECUTABLE(${PROJECT_NAME} Main.cpp)

# find all source files and add them to DIR_SRCS
aux_source_directory(. DIR_SRCS)

option(USE_MY_LIST "use my list" ON)

if(USE_MY_LIST)
    # add sub directory "list"
    add_subdirectory(LinkList)
    list(APPEND EXTRA_LIBS LinkList)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR/LinkList}")
endif()

target_link_libraries(${PROJECT_NAME} PUBLIC ${EXTRA_LIBS})

# add link libraries "list"
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" "${EXTRA_INCLUDES}")




