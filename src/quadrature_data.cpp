#include "../include/quadrature_data.hpp"


namespace FEM
{

const int32_t QuadratureData::m_available_pts = 4;

const std::vector<std::vector<double>> QuadratureData::m_q = {
    {0.0},
    {-0.5773502691896257,0.5773502691896257},
    {-0.7745966692414834,0.0,0.7745966692414834},
    {-0.8611363115940526,-0.3399810435848563,0.3399810435848563,0.8611363115940526}
};

const std::vector<std::vector<double>> QuadratureData::m_w = {
    {2.0},
    {1.0,1.0},
    {0.5555555555555556,0.8888888888888888,0.5555555555555556},
    {0.3478548451374538,0.6521451548625461,0.6521451548625461,0.3478548451374538}
};


}
