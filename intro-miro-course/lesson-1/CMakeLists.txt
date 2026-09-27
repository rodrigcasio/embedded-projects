cmake_minimum_required(VERSION 3.20)
project(Lesson1 C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(arm-gcc-toolchain.cmake)

add_compile_options(
  -mcpu=cortex-m4
  -mthumb
  -O0
  -g3
  -Wall
)

add_executables(main.elf src/main.c)

target_link_options(
  main.elf
    PRIVATE
    -mcpu=cortex-m4
    -mthumb
    --specs=nosys.specs
)

