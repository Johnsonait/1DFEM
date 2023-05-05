#ifndef LAGRNANGE_ELEMENT_HPP
#define LAGRNANGE_ELEMENT_HPP

#include <vector>

#include "./element.hpp"
#include "./logging.hpp"

namespace FEM
{

class LagrangeElement : public Element
{
public: 
    LagrangeElement();
    LagrangeElement(int32_t);
    virtual ~LagrangeElement() override = default;

    virtual double shape(const int, const double) const override;
    virtual double shape_derivative(const int, const double) const override;

private:
    int32_t N = 1;
    std::vector<double> lagrange_points;

    double get_point(int);

};

}

#endif