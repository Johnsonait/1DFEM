#ifndef LOCAL_VECTOR_HPP
#define LOCAL_VECTOR_HPP

#include <Eigen/Dense>

namespace FEM
{

class LocalVector
{
public:
    LocalVector() = default;
    LocalVector(const Eigen::VectorXd&);
    LocalVector(Eigen::VectorXd&&);
    LocalVector(int32_t);

    ~LocalVector() = default;

    LocalVector operator=(const Eigen::VectorXd&);
    LocalVector operator=(Eigen::VectorXd&&);

    friend LocalVector operator+(const LocalVector&, const LocalVector&);

    Eigen::VectorXd& item();

private:
    Eigen::VectorXd m_vec;
};


}

#endif