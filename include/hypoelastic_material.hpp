#ifndef HYPOELASTIC_MATERIAL_HPP
#define HYPOELASTIC_MATERIAL_HPP

#include "./eigen_includes.hpp"
#include "./material.hpp"

namespace FEM
{
class HypoElasicMaterial : public Material
{
public: 
    HypoElasicMaterial() = default;
    HypoElasicMaterial(double, double);
    virtual ~HypoElasicMaterial() = default;

    virtual Stress GetStress();
    
private:
    double m_E = 0.0;
    double m_Poisson = 0.0;

    Eigen::Matrix<double,6,6> m_ELAS;

};

}

#endif