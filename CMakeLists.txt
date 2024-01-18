
cmake_minimum_required(VERSION 3.23)

project(flux-demo CXX)

include(FetchContent)

FetchContent_Declare(
    flux
    GIT_REPOSITORY https://github.com/tcbrindle/flux.git
    GIT_TAG main # Replace with a git commit id to fix a particular revision
)

FetchContent_MakeAvailable(flux)

add_executable(demo demo.cpp)
target_link_libraries(demo PUBLIC flux::flux)
