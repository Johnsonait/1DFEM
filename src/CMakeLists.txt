# Add source files
set(SOURCES
    problem_data.cpp
    stress.cpp
    material.cpp
    hypoelastic_material.cpp
    element.cpp
    lagrange_element.cpp
    quadrature_data.cpp
    screen_writer.cpp
    fem_solver.cpp
    program.cpp
    1DFEM.cpp
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Include headers in /include directory
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries (${PROJECT_NAME} Eigen3::Eigen)

# Include external libraries in /vendor directory
#target_link_libraries(${PROJECT_NAME} PRIVATE Eigen)
