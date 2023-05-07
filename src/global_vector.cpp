#include "../include/global_vector.hpp"


namespace FEM
{

GlobalVector operator+(const GlobalVector& lhs, const GlobalVector& rhs)
{
    return GlobalVector{lhs.m_vec + rhs.m_vec};
}

GlobalVector::GlobalVector(const Eigen::VectorXd& in) : m_vec{in}
{}

GlobalVector::GlobalVector(Eigen::VectorXd&& in) : m_vec{in}
{}

GlobalVector::GlobalVector(int32_t n_eqs) : m_vec{n_eqs}
{}

GlobalVector GlobalVector::operator=(const Eigen::VectorXd& rhs)
{
    return GlobalVector{m_vec};
}

GlobalVector GlobalVector::operator=(Eigen::VectorXd&& rhs)
{
    return GlobalVector{rhs};
}

Eigen::VectorXd& GlobalVector::item()
{
    return this->m_vec;
}

}