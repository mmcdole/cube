cmake_minimum_required(VERSION 2.8)

project(cube)

FILE(GLOB SOURCE_FILES src/*.c)

add_executable(
  cube
  ${SOURCE_FILES}
  deps/glew/src/glew.c
  deps/lodepng/lodepng.c
  deps/noise/noise.c)

add_definitions(-std=c99 -O3)

add_subdirectory(deps/glfw)
include_directories(deps/glew/include)
include_directories(deps/glfw/include)
include_directories(deps/lodepng)
include_directories(deps/noise)

target_link_libraries(cube glfw ${GLFW_LIBRARIES})
