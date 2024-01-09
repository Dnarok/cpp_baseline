cmake_minimum_required(VERSION 3.16)

project(
    name
    LANGUAGES CXX
    VERSION   1.0
)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(external)

add_executable(${PROJECT_NAME}
    source/main.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC include
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE spdlog::spdlog
    PRIVATE fmt::fmt
)