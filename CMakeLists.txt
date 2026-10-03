cmake_minimum_required(VERSION 3.10)
project(todo++)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # Fails configuration if the compiler doesn't support C++17
set(CMAKE_CXX_EXTENSIONS ON)        # Disables compiler-specific extensions (forces strict compliance)

add_subdirectory(src)
add_subdirectory(lib)
