cmake_minimum_required(VERSION 3.20)

project(Lesson3 C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(
  -mcu=cortex-m4
  -mthumb
  -O0
  -g3
  -Wall
)

add_executables(
  main.elf
  src/main.c
)

target_link_options(
  main.elf
    PRIVATE 
    -mcu=cortex-m4
    -mthumb
    --specs=nosys.specs
)
