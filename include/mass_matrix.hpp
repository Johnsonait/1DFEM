#ifndef MASS_MATRIX_HPP
#define MASS_MATRIX_HPP

#include <Eigen/Sparse>

namespace FEM
{

//==============================================================================
//                              GlobalMassMatrix
//==============================================================================
class MassMatrix
{
public:
    MassMatrix() = default;
    virtual ~MassMatrix() = default;

private:
};

class GlobalMassMatrix : public MassMatrix
{
public:
    GlobalMassMatrix() = default;
    GlobalMassMatrix(const Eigen::SparseMatrix<double> &);
    GlobalMassMatrix(int);
    virtual ~GlobalMassMatrix() = default;

    Eigen::SparseMatrix<double>& item();

    friend GlobalMassMatrix operator+(const GlobalMassMatrix&, const GlobalMassMatrix&);

private:
    Eigen::SparseMatrix<double> m_M;
};

//==============================================================================
//                              LocalMassMatrix
//==============================================================================
class LocalMassMatrix : public MassMatrix
{
public:
    LocalMassMatrix() = default;
    LocalMassMatrix(const Eigen::MatrixXd&);
    LocalMassMatrix(int);
    virtual ~LocalMassMatrix() = default;

    Eigen::MatrixXd& item();

    friend LocalMassMatrix operator+(const LocalMassMatrix&, const LocalMassMatrix&);

private:
    Eigen::MatrixXd m_M;
};

}

#endif
