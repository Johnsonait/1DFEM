#ifndef MASS_MATRIX_HPP
#define MASS_MATRIX_HPP

#include <Eigen/Sparse>

namespace FEM
{
class MassMatrix
{
public:
    MassMatrix() = default;
    virtual ~MassMatrix() = 0;

private:
};

class GlobalMassMatrix : public MassMatrix
{
public:
    GlobalMassMatrix() = default;
    virtual ~GlobalMassMatrix() = default;

    Eigen::SparseMatrix<double> m_M;

private:
};

class LocalMassMatrix : public MassMatrix
{
public:
    LocalMassMatrix() = default;
    virtual ~LocalMassMatrix() = default;

    Eigen::MatrixXd m_M;

private:
};

}

#endif
