# Add source files
set(SOURCES
    1DFEM.cpp
    program.cpp
    problem_data.cpp
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Include headers in /include directory
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries (${PROJECT_NAME} Eigen3::Eigen)

# Include external libraries in /vendor directory
#target_link_libraries(${PROJECT_NAME} PRIVATE Eigen)
