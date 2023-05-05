#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include "./stress.hpp"

namespace FEM
{

class Material
{
public:
    Material() = default;
    virtual ~Material() = default;

    virtual Stress GetStress() = 0;

private:
};

}

#endif
