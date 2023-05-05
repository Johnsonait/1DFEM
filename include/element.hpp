#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include <vector>

namespace FEM
{

class Element
{
public:
    Element() = default;
    virtual ~Element() = default;

    virtual double shape(const int, const double) const = 0;
    virtual double shape_derivative(const int, const double) const = 0;

private:

};

}

#endif 