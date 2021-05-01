cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(main VERSION 1.0)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

include_directories("${CMAKE_CURRENT_LIST_DIR}")
add_library(a4988 INTERFACE) 
add_executable(main main.cpp a4988.cpp)

target_include_directories(main INTERFACE include/)
target_link_libraries(main pico_stdlib hardware_pio a4988)


# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(main)

