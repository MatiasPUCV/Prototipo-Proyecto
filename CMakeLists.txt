cmake_minimum_required(VERSION 3.2)

project(Proyecto)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_BUILD_TYPE}")

add_subdirectory(thirdparty/SDL2)
file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
                                        "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PUBLIC SDL2main SDL2)