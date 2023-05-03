#ifndef PROBLEM_DATA_HPP
#define PROBLEM_DATA_HPP

#include <vector>
#include <iostream>

#include <Eigen/Dense>

namespace FEM
{

struct ProblemData
{
public: 
    ProblemData() = default;

    // Define accessible and modifiable data of the solver
    double t = 0.0;                            // Solution time
    int32_t incr = 0;                          // Increment count

    // Define a bunch of static data that gets used by the solver
    constexpr static double t_s = 0.0;         // Start time
    constexpr static double t_f = 1.0;         // End time
    constexpr static int32_t info_incr = 10;   // Number of increments per write
    constexpr static double E = 70.0e9;        // Elastic modulus
    constexpr static double Poisson = 0.3;     // Poisson's ratio
    constexpr static double Len = 1.0;         // Bar length
    constexpr static double Area = 0.02;       // Bar cross-sectional area  
    constexpr static int32_t n_el = 5;         // Number of elements
    constexpr static int32_t quad_points = 2;  // Quadrature points per element

private:
};



}

#endif