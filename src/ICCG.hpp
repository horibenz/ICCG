#ifndef ICCG_HPP
#define ICCG_HPP

#include <iostream>
#include <vector>

class ICCG
{
private:
    /* data */
    double h, eps;
    int nx, ny, i, j, it, ind;
    int itmax = 100000;
    std::vector<std::vector<double>> xr, br;
    double del, h2, fa1, fa2, alpha, beta;
    std::vector<std::vector<double>> rr, pr, wr, dg;

public:
    ICCG(
        std::vector<std::vector<double>> xr,
        std::vector<std::vector<double>> br,
        double h,
        int nx, int ny,
        double eps,
        int ind
    );
    int get();
};

#endif