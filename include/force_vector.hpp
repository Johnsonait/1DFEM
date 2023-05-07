#ifndef FORCE_VECTOR_HPP
#define FORCE_VECTOR_HPP


#include <Eigen/Dense>
#include <Eigen/Sparse>

namespace FEM
{


// GlobalForceVector operator+(const GlobalForceVector&,const GlobalForceVector&);

class ForceVector
{
public:
    ForceVector() = default;
    virtual ~ForceVector() = default;

private:
};

class GlobalForceVector : public ForceVector
{
public:
    GlobalForceVector() = default;
    GlobalForceVector(const Eigen::SparseVector<double>&);
    GlobalForceVector(int);
    virtual ~GlobalForceVector() = default;

    friend GlobalForceVector operator+(const GlobalForceVector&, GlobalForceVector&);

    Eigen::SparseVector<double>& item();

private:
    Eigen::SparseVector<double> m_f;    
};

// LocalForceVector operator+(const LocalForceVector&, const LocalForceVector&);

class LocalForceVector : public ForceVector
{
public:
    LocalForceVector() = default;
    LocalForceVector(const Eigen::VectorXd&);
    LocalForceVector(int);
    virtual ~LocalForceVector() = default;

    friend LocalForceVector operator+(const LocalForceVector&, const LocalForceVector&);
    
    Eigen::VectorXd& item();

private:
    Eigen::VectorXd m_f;

};

}

#endif