
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_OSX_ARCHITECTURES "x86_64")
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
add_compile_definitions(WIN32_LEAN_AND_MEAN)


project(AutoDeafen VERSION 1.0.0)

file(GLOB MAINSOURCES
    src/main.cpp
)
add_library(${PROJECT_NAME} SHARED ${MAINSOURCES})

if (NOT DEFINED ENV{GEODE_SDK})
  message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
  message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

# **Add this line:**
set(GEODE_TARGET_PLATFORM "Win64")

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

# Set up dependencies, resources, link Geode
setup_geode_mod(${PROJECT_NAME})
