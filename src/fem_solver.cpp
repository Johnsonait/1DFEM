#include "../include/fem_solver.hpp"

namespace FEM
{

void FEMSolver::solve(std::shared_ptr<ProblemData> data)
{  
    ScreenWriter writer{};

    LagrangeElement my_element{2};
    double w = QuadratureData::QuadPoint((int32_t)2,(int32_t)0);
    HypoElasicMaterial my_material{data->E,data->Poisson};

    return;
}

}