#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main() {
    Matrix3d m,n;
    m << 1,2,3,
        4,5,6,
        7,8,9;
    std::cout << "m = " << std::endl;
    std::cout << m << std::endl;

    n << 2,3,5,
        7,11,13,
        17,19,23;
    std::cout << "n = " << std::endl;
    std::cout << n << std::endl;
    std::cout << "m + n = " << std::endl;
    std::cout << m + n << std::endl;
    std::cout << "m - n = " << std::endl;
    std::cout << m - n << std::endl;
    std::cout << "m * n = " << std::endl;
    std::cout << m * n << std::endl;

    std::cout << "n.col(0) = " << std::endl;
    std::cout << n.col(0) << std::endl;
    std::cout << "n.col(2).sum() = " << std::endl;
    std::cout << n.col(2).sum() << std::endl;
    return 0;
}
