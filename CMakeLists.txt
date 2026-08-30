cmake_minimum_required(VERSION 3.10.2)
project("lodengine")

set(CMAKE_CXX_STANDARD 17)

add_library(lodengine SHARED
    src/main/cpp/main.cpp
    src/main/cpp/generator.cpp
    src/main/cpp/renderer.cpp
    src/main/cpp/frustum.cpp
)

target_link_libraries(lodengine
    android
    log
    GLESv3
    EGL
)
