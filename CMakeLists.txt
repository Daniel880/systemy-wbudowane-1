cmake_minimum_required(VERSION 3.10)

# Project name
project(sw VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# List all command files explicitly
set(COMMAND_SOURCES
    commands/JanKowalski_command.cpp
    commands/AnnaNowak_command.cpp
    commands/DanielWyrwal_command.cpp
    commands/JonaszKoryl_command.cpp
    # Add more command files here for new students
)

# Add executable with main, command registry, and all command files
add_executable(sw 
    src/main.cpp
    src/command.cpp
    ${COMMAND_SOURCES}
)
