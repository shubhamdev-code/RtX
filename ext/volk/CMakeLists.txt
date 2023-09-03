cmake_minimum_required(VERSION 3.8)

add_library(volk "volk.c" "volk.h")

target_compile_definitions(volk PUBLIC VK_NO_PROTOTYPES)