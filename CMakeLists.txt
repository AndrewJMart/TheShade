cmake_minimum_required(VERSION 3.5)
project(crow_example)

include(FetchContent)

FetchContent_Declare(
    crow
    GIT_REPOSITORY https://github.com/CrowCpp/Crow.git
    GIT_TAG v1.0+2
)

FetchContent_MakeAvailable(crow)

add_executable(server main.cpp)
target_link_libraries(server PRIVATE Crow::Crow)

