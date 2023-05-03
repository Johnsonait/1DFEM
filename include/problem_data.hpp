#ifndef PROBLEM_DATA_HPP
#define PROBLEM_DATA_HPP

#include <Eigen/Dense>

namespace FEM
{

class ProblemData
{
public: 
    ProblemData() = default;

    // Define a bunch of static data that gets used by the solver
    constexpr static double t_s = 0.0;     // Start time
    constexpr static double t_f = 0.0;     // End time
    constexpr static double E = 70.0e9;    // Elastic modulus
    constexpr static double Poisson = 0.0; // Poisson's ratio

    constexpr static double L = 1.0;       // Bar length
    constexpr static double A = 0.02;      // Bar cross-sectional area  
    constexpr static int n_el = 5;         // Number of elements
    constexpr static int quad_points = 2;  // Quadrature points per element

    //Define 

private:
};

}

#endif