set(tools /home/wubo/Desktop/github/rasp-tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin)
set(CMAKE_C_COMPILER    ${tools}/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER  ${tools}/arm-linux-gnueabihf-g++)

set(CMAKE_CXX_FLAGS           ""                    CACHE STRING "c++ flags")
set(CMAKE_C_FLAGS             ""                    CACHE STRING "c flags")
set(CMAKE_SHARED_LINKER_FLAGS ""                    CACHE STRING "shared linker flags")
set(CMAKE_MODULE_LINKER_FLAGS ""                    CACHE STRING "module linker flags")
set(CMAKE_EXE_LINKER_FLAGS    "-Wl,-z,-lm,-lpthread"  CACHE STRING "executable linker flags")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mthumb -fdata-sections -Wa,--noexecstack -fsigned-char -Wno-psabi")
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} -mthumb -fdata-sections -Wa,--noexecstack -fsigned-char -Wno-psabi")

set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--fix-cortex-a8 -Wl,--no-undefined -Wl,--gc-sections -Wl,-z,noexecstack -Wl,-z,relro -Wl,-z,now ${CMAKE_SHARED_LINKER_FLAGS}")
set(CMAKE_MODULE_LINKER_FLAGS "-Wl,--fix-cortex-a8 -Wl,--no-undefined -Wl,--gc-sections -Wl,-z,noexecstack -Wl,-z,relro -Wl,-z,now ${CMAKE_MODULE_LINKER_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS    "-Wl,--fix-cortex-a8 -Wl,--no-undefined -Wl,--gc-sections -Wl,-z,noexecstack -Wl,-z,relro -Wl,-z,now ${CMAKE_EXE_LINKER_FLAGS}")



