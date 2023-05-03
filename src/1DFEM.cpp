#include "../include/program.hpp"

int main()
{
    FEM::Program* program = new FEM::Program();

    program->Run();

    delete program;
}