cmake_minimum_required(VERSION 3.16)
project(RSS)

set(CMAKE_CXX_STANDARD 14)

add_executable(RSS WIN32 main.cpp Car.cpp Car.h Input.cpp Input.h Player.h Player.cpp)

add_subdirectory(Logger)
target_link_libraries(RSS Logger)
target_include_directories(RSS PRIVATE Logger)

add_subdirectory(SDL-main)
target_link_libraries(RSS SDL2-static)
target_link_libraries(RSS SDL2main)
target_include_directories(RSS PRIVATE SDL-main/include)