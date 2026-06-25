cmake_minimum_required(VERSION 3.3)
project(TicTacToe VERSION 0.1)
add_executable(TicTacToe src/game.cpp)

add_subdirectory(libs/score)


include(FetchContent)
FetchContent_Declare(raylib GIT_REPOSITORY https://github.com/raysan5/raylib.git GIT_TAG master)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_TESTS OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(raylib)



target_include_directories(TicTacToe PUBLIC libs/score)
target_link_libraries(TicTacToe PUBLIC score)
target_link_libraries(TicTacToe PRIVATE raylib)
