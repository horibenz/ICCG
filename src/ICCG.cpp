#include <ICCG.hpp>

ICCG::ICCG(
    std::vector<std::vector<double>> xr,
    std::vector<std::vector<double>> br,
    double h,
    int nx, int ny,
    double eps,
    int ind    
){
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            pr[i][j] = 0;
        }
        
    }
    double h2 = h * h;

}
