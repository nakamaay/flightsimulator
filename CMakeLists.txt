cmake_minimum_required(VERSION 3.5)

project(FlightSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(FlightSimulator main.cpp)



target_link_libraries(FlightSimulator -lglut -lGLU -lGL)
