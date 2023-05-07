#ifndef GLOBAL_VECTOR_HPP
#define GLOBAL_VECTOR_HPP

#include <Eigen/Dense>

namespace FEM
{

class GlobalVector
{
public:
    GlobalVector() = default;
    GlobalVector(const Eigen::VectorXd&);
    GlobalVector(Eigen::VectorXd&&);
    GlobalVector(int32_t);

    ~GlobalVector() = default;

    GlobalVector operator=(const Eigen::VectorXd&);
    GlobalVector operator=(Eigen::VectorXd&&);

    friend GlobalVector operator+(const GlobalVector&, const GlobalVector&);

    Eigen::VectorXd& item();

private:
    Eigen::VectorXd m_vec;
};

}

#endif