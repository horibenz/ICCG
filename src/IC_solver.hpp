#ifndef IC_solver_HPP
#define IC_solver_HPP

#include <iostream>
#include <vector>

class IC_solver
{
private:
    std::vector<std::vector<double>> rr, wr, dg;
    int nx, ny, mode, i, j;

public:
    IC_solver(/* args */);
    ~IC_solver();
};

#endif