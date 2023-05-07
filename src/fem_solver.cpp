#include "../include/fem_solver.hpp"

namespace FEM
{

void FEMSolver::solve(std::shared_ptr<ProblemData> data)
{  
    ScreenWriter writer{};

    LagrangeElement my_element{data->points_per_element};
    HypoElasicMaterial my_material{data->E,data->Poisson};

    const int32_t num_eqn = data->points_per_element*data->n_el;
    // Initialize global data and working arrays
    auto M_g = GlobalMassMatrix::ConstructGlobalMassMatrix(data);
    auto f_g = GlobalVector{num_eqn};
    auto u_g = GlobalVector{num_eqn};
    auto v_g = GlobalVector{num_eqn};
    auto a_g = GlobalVector{num_eqn};

    writer = this->write_screen(data,writer);

    while (data->t < data->t_f)
    {
        data->t += data->dt;
        data->incr += 1;

        if (data->incr%data->info_incr == 0)
        {
            write_screen(data,writer);
        }
    }

    return;
}

ScreenWriter& FEMSolver::write_screen(std::shared_ptr<ProblemData> data,ScreenWriter& writer)
{
    std::stringstream ss;
    writer.clear();
    writer.seperator('=');

    ss<<"TIME: "<< data->t << " ("<<100*(data->t/data->t_f)<<"%)"<<"\n";
    ss<<"TIMESTEP: "<< data->dt << "\n";
    ss<<"INCREMENT: " <<data->incr << "\n";

    writer.write(ss);
    writer.seperator('=');

    return writer;
}

}