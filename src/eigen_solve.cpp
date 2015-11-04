#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main() {
    Matrix3d A;
    A << 19,2,3,
         5,7,11,
         13,17,23;

    std::cout << "A = \n" << A << std::endl;

    EigenSolver<Matrix3d> eig(A);
    std::cout << "eigenvalues:\n"
    << eig.eigenvalues() << std::endl;
    std::cout << "eigenvectors:\n"
    << eig.eigenvectors() << std::endl;

    SelfAdjointEigenSolver<Matrix3d> eig2(A);
    std::cout << "eigenvalues:\n"
    << eig2.eigenvalues() << std::endl;
    std::cout << "eigenvectors:\n"
    << eig2.eigenvectors() << std::endl;

    return 0;
}
