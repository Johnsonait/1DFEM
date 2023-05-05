#include "../include/stress.hpp"


namespace FEM
{
double& Stress::AsVoigt()
{
    return this->m_stress;
}

double& Stress::AsTensor()
{
    return this->m_stress;
}

}