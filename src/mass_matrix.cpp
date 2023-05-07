#include "../include/mass_matrix.hpp"

namespace FEM
{
//==============================================================================
//                              GlobalMassMatrix
//==============================================================================
GlobalMassMatrix::GlobalMassMatrix(const Eigen::SparseMatrix<double>& in) : m_M{in}
{}

GlobalMassMatrix::GlobalMassMatrix(int n_eqs) : m_M{Eigen::SparseMatrix<double>{n_eqs,n_eqs}}
{}

Eigen::SparseMatrix<double>& GlobalMassMatrix::item()
{
    return this->m_M;
}
GlobalMassMatrix operator+(const GlobalMassMatrix& lhs, const GlobalMassMatrix& rhs)
{
    GlobalMassMatrix ret{static_cast<GlobalMassMatrix>(lhs.m_M+rhs.m_M)};
    return ret;
}

//==============================================================================
//                              LocalMassMatrix
//==============================================================================
LocalMassMatrix::LocalMassMatrix(const Eigen::MatrixXd& in) : m_M{in}
{}

LocalMassMatrix::LocalMassMatrix(int n_eqs) : m_M{n_eqs,n_eqs}
{}

Eigen::MatrixXd& LocalMassMatrix::item()
{
    return this->m_M;
}

LocalMassMatrix operator+(const LocalMassMatrix& lhs, const LocalMassMatrix& rhs)
{
    return static_cast<LocalMassMatrix>(lhs.m_M + rhs.m_M);
}

}