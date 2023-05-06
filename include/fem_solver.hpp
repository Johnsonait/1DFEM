#ifndef FEM_SOLVER_HPP
#define FEM_SOLVER_HPP

#include "./problem_data.hpp"
#include "./screen_writer.hpp"
#include "./elements.hpp"
#include "./quadrature_data.hpp"
#include "./logging.hpp"
#include "./material.hpp"
#include "./hypoelastic_material.hpp"

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
};

}

#endif
