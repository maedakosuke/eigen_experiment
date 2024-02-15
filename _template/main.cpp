#include <iostream>
#include <Eigen/Dense>

int main(int argc, char *argv[]) {
    std::cout << "*** start ***" << std::endl;
    Eigen::Matrix4d mat;
    mat.setIdentity();
    std::cout << mat << std::endl;
    std::cout << "*** end ***" << std::endl;
}