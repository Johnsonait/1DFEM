#include "../include/hypoelastic_material.hpp"


namespace FEM
{
HypoElasicMaterial::HypoElasicMaterial(double E, double Poisson) : 
    m_E(E),
    m_Poisson(Poisson)
{
    m_ELAS = Eigen::MatrixXd::Zero(6,6);
}

Stress HypoElasicMaterial::GetStress()
{
    Stress stress{};
    return stress;
}

}