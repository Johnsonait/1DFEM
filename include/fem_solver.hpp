#ifndef FEM_SOLVER_HPP
#define FEM_SOLVER_HPP

#include "./problem_data.hpp"
#include "./screen_writer.hpp"
#include "./elements.hpp"
#include "./quadrature_data.hpp"
#include "./logging.hpp"
#include "./material.hpp"
#include "./hypoelastic_material.hpp"
#include "./mass_matrix.hpp"
#include "./local_vector.hpp"
#include "./global_vector.hpp"

#include <memory>
#include <string>
#include <sstream>

namespace FEM
{

class FEMSolver
{
public:
    FEMSolver() = default;
    ~FEMSolver() = default;

    void solve(std::shared_ptr<ProblemData>);

private:
    ScreenWriter& write_screen(std::shared_ptr<ProblemData>,ScreenWriter&);

};

}

#endif
