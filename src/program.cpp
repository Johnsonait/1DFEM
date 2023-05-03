#include "../include/program.hpp"

namespace FEM
{

void FEM::Program::Run()
{
    FEMSolver solver{};
    solver.solve(this->data);
    return;
}

}