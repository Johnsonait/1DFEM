#ifndef ASSEMBLER_HPP
#define ASSEMBLER_HPP

#include "./force_vector.hpp"
#include "./mass_matrix.hpp"

namespace FEM
{

class Assembler
{
public:
    Assembler() = default;
    ~Assembler() = default;

    GlobalForceVector& Assemble(GlobalForceVector&, LocalForceVector&);
    GlobalMassMatrix& Assemble(GlobalMassMatrix&, LocalMassMatrix&);

private:

};

}

#endif
