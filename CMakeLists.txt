cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(libcerf-playground)

find_package(cerf 2.1 EXACT REQUIRED)

SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

add_executable(${PROJECT_NAME} 
  "src/main.cpp"
)

target_link_libraries(${PROJECT_NAME} cerf::cerfcpp)