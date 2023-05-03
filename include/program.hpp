#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include <memory>
#include <iostream>

#include "./problem_data.hpp"
#include "./fem_solver.hpp"

namespace FEM
{

class Program 
{
public:
    Program() = default;
    void Run();
private:
    const std::shared_ptr<ProblemData> data = std::make_shared<ProblemData>();
};

}


#endif