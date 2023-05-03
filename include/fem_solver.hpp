#ifndef FEM_SOLVER_HPP
#define FEM_SOLVER_HPP

#include "./problem_data.hpp"
#include "./screen_writer.hpp"

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