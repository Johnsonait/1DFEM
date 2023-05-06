#ifndef FORCE_VECTOR_HPP
#define FORCE_VECTOR_HPP


#include <Eigen/Dense>
#include <Eigen/Sparse>

namespace FEM
{

class ForceVector
{
public:
    ForceVector() = default;
    virtual ~ForceVector() = 0;

private:
};

class GlobalForceVector : public ForceVector
{
public:
    GlobalForceVector() = default;
    virtual ~GlobalForceVector() = default;

    Eigen::SparseVector<double> m_f;

private:
};

class LocalForceVector : public ForceVector
{
public:
    LocalForceVector() = default;
    virtual ~LocalForceVector() = default;

    Eigen::VectorXd m_f;

private:

};

}

#endif