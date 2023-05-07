#include "../include/force_vector.hpp"

namespace FEM
{

//==============================================================================
//                              GlobalForceVector
//==============================================================================
GlobalForceVector::GlobalForceVector(const Eigen::SparseVector<double>& in) : m_f{in}
{}

GlobalForceVector::GlobalForceVector(int n_eqs) : m_f{Eigen::SparseVector<double>{n_eqs}}
{}

Eigen::SparseVector<double>& GlobalForceVector::item()
{
    return this->m_f;
}

GlobalForceVector operator+(const GlobalForceVector& lhs, GlobalForceVector& rhs)
{
    GlobalForceVector ret = static_cast<Eigen::SparseVector<double>>(lhs.m_f + rhs.m_f);
    return ret;
}

//==============================================================================
//                              LocalForceVector
//==============================================================================
LocalForceVector::LocalForceVector(const Eigen::VectorXd& in) : m_f{in}
{}

LocalForceVector::LocalForceVector(int n_eqs) : m_f{Eigen::VectorXd{n_eqs}}
{}

Eigen::VectorXd& LocalForceVector::item()
{
    return this->m_f;
}

LocalForceVector operator+(const LocalForceVector& lhs, const LocalForceVector& rhs)
{
    LocalForceVector ret = static_cast<Eigen::VectorXd>(lhs.m_f + rhs.m_f);
    return ret;
}

}