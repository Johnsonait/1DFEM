#include "../include/fem_solver.hpp"

namespace FEM
{

void FEMSolver::solve(std::shared_ptr<ProblemData> data)
{  
    ScreenWriter writer{};

    std::stringstream ss{};

    ss << "Some output!";

    writer.seperator('=');
    writer.write(ss);
    writer.seperator('=');
    
    return;
}

}