cmake_minimum_required(VERSION 3.13)
project(snake_game_console)

set(CMAKE_CXX_STANDARD 14)

add_executable(snake_game_console main.cpp PlayGame.cpp PlayGame.h GameField.cpp GameField.h Apple.cpp Apple.h Snake.cpp Snake.h Position.cpp Position.h Direction.h)