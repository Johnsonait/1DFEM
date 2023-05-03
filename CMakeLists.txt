cmake_minimum_required(VERSION 3.10)

project(1DFEM)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#set(CMAKE_CXX_COMPILER "g++")
SET(CMAKE_CXX_FLAGS "-std=c++17")

# Add subdirectories
add_subdirectory(src)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/vendor/eigen)
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
 
#add_executable (${PROJECT_NAME} 1DFEM.cpp)