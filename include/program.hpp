#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include <memory>
#include <iostream>

#include "../include/problem_data.hpp"

namespace FEM
{

class Program 
{
public:
    Program() = default;
    void Run();
private:
    const std::unique_ptr<ProblemData> data = std::make_unique<ProblemData>();
};

}


#endif