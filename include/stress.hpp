#ifndef STRESS_HPP
#define STRESS_HPP

namespace FEM
{
// Class to "hide" the use of arrays and such in the usage of stress data.
// Only really makes sense in multi-dimensional problems since for the 1D
// case I am only looking at the normal stress which is easily treated as a
// scalar. Oh well, hopefully the abstraction will be more usefull in future
// multi-dimensional implementations
class Stress
{
public: 
    Stress() = default;
    ~Stress() = default;

    // Give underlying data as 1D vector
    double& AsVoigt();
    // Give underlying data as 2D matrix
    double& AsTensor();

private:
    // This would be some kind of 1D array or vector in the multidim case in Viogt notation
    double m_stress = 0.0; 

};
}

#endif