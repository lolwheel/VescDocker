cmake_minimum_required(VERSION 3.0.0)
project(float-pkg-simulator VERSION 0.1.0 LANGUAGES C CXX)

include_directories(vedderb/vesc_pkg/float/float)
include_directories(vedderb/vesc_pkg/c_libs)
include_directories(stubs/include)

add_executable(float-pkg-simulator
main.cpp
stubs/led.c
vedderb/vesc_pkg/float/float/float.c
vedderb/vesc_pkg/float/float/footpad_sensor.c
vedderb/vesc_pkg/float/float/konami.c
vedderb/vesc_pkg/float/float/conf/buffer.c
vedderb/vesc_pkg/float/float/conf/confparser.c
vedderb/vesc_pkg/float/float/conf/confxml.c)

target_compile_definitions(float-pkg-simulator
    PRIVATE
    IS_VESC_LIB)

set_target_properties(float-pkg-simulator PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")