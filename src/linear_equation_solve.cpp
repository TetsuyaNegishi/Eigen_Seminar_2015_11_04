#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main() {
    Matrix3d A;
    A << 1,2,3,
         5,7,11,
         13,17,23;

    Vector3d b;
    b.setOnes();

    std::cout << "A = \n" << A << std::endl;
    std::cout << "b = \n" << b << std::endl;

    std::cout << "HouseHolderQR:\n" << A.householderQr().solve(b) << std::endl;
    std::cout << "FullPivLU:\n" << A.fullPivLu().solve(b) << std::endl;


    return 0;
}
