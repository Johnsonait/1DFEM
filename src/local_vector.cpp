#include "../include/local_vector.hpp"


namespace FEM
{

LocalVector operator+(const LocalVector& lhs, const LocalVector& rhs)
{
    return LocalVector{lhs.m_vec + rhs.m_vec};
}

LocalVector::LocalVector(const Eigen::VectorXd& in) : m_vec{in}
{}

LocalVector::LocalVector(Eigen::VectorXd&& in) : m_vec{in}
{}

LocalVector::LocalVector(int32_t n_eqs) : m_vec{n_eqs}
{}

LocalVector LocalVector::operator=(const Eigen::VectorXd& rhs)
{
    return LocalVector{m_vec};
}

LocalVector LocalVector::operator=(Eigen::VectorXd&& rhs)
{
    return LocalVector{rhs};
}

Eigen::VectorXd& LocalVector::item()
{
    return this->m_vec;
}

}