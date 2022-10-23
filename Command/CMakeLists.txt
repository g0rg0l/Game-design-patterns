cmake_minimum_required(VERSION 3.23)
project(game_dev_patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(game_dev_patterns main.cpp Engine.cpp Engine.h Player.cpp Player.h Command.cpp Command.h CommandInvoker.cpp CommandInvoker.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include/SFML)
target_link_libraries(game_dev_patterns sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
