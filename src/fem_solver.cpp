#include "../include/fem_solver.hpp"

namespace FEM
{

void FEMSolver::solve(std::shared_ptr<ProblemData> data)
{  
    ScreenWriter writer{};

    LagrangeElement my_element{data->points_per_element};
    HypoElasicMaterial my_material{data->E,data->Poisson};

    auto M_g = GlobalMassMatrix{10000};
    auto f_g = GlobalForceVector{10000};

    writer = this->write_screen(data,writer);

    return;
}

ScreenWriter& FEMSolver::write_screen(std::shared_ptr<ProblemData> data,ScreenWriter& writer)
{
    std::stringstream ss;
    writer.clear();
    writer.seperator('=');

    ss<<"TIME: "<< data->t << "\n";
    ss<<"INCREMENT: " <<data->incr << "\n";

    writer.write(ss);
    writer.seperator('=');

    return writer;
}

}