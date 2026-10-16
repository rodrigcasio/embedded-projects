## Embedded projects

#### pkgs

arm-none-eabi-gcc 
arm-none-eabi-newlib 
arm-none-eabi-gdb 
cmake 
ninja 
qemu-system-arm

- build project with CMake
```
cmake -S . -G Ninja -B build -D CMAKE_TOOLCHAIN_FILE=arm-gcc-toolchain.cmake

cmake --build build

*build/main.elf created*
```

- Launch QEMU (ARM Emulator)
```
qemu-system-arm -machine netduinoplus2 -cpu cortex-m4 -kernel build/main.elf -s -S

** leaving this running and exposes port :1234 for GDB **
```

- Launch GDB & Run
```
arm-none-eabi-gdb build/main.elf
```

- GDB (setup commands)
```
target remote :1234
set $sp = 0x20001000
set $r7 = 0x20000f00
set $pc = main
```



