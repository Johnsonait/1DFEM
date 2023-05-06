#include "../include/assembler.hpp"


namespace FEM
{

GlobalForceVector& Assembler::Assemble(GlobalForceVector& f_g, LocalForceVector& f_e)
{
    return f_g;
}

GlobalMassMatrix& Assembler::Assemble(GlobalMassMatrix& M_g, LocalMassMatrix& M_e)
{
    return M_g;
}

}