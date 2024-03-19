cmake_minimum_required(VERSION 3.13)
project(TFT_eSPI)

add_library(TFT_eSPI INTERFACE)

target_include_directories(TFT_eSPI INTERFACE  ${PROJECT_SOURCE_DIR}/)

target_sources(TFT_eSPI INTERFACE
    TFT_eSPI.cpp Arduino/SPI.cpp Arduino/Print.cpp
    Arduino/wiring_digital.cpp Arduino/delay.cpp
    Arduino/Common.cpp Arduino/String.cpp Arduino/stdlib_noniso.cpp
)