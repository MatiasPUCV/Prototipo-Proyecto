cmake_minimum_required(VERSION 3.2)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

project(Proyecto)

file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
                                        "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)