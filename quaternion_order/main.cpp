#include <iostream>
#include <Eigen/Dense>

void print(Eigen::Quaterniond q) {
    std::cout << q << std::endl;
    auto *data = (double *) (&q);
    std::cout << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << std::endl;
}

int main(int argc, char *argv[]) {
    std::cout << "*** start ***" << std::endl;
    {
        Eigen::Quaterniond q;
        q.x() = 1.;
        q.y() = 2.;
        q.z() = 3.;
        q.w() = 4.;
        print(q);
    }
    {
        Eigen::Vector4d v{1., 2., 3., 4.};
        Eigen::Quaterniond q{v};
        print(q);
    }
    {
        Eigen::Vector4d v{1., 2., 3., 4.};
        Eigen::Quaterniond q{&v[0]};
        print(q);
    }
    std::cout << "*** end ***" << std::endl;
}

//*** start ***
//1i + 2j + 3k + 4
//1 2 3 4
//1i + 2j + 3k + 4
//1 2 3 4
//1i + 2j + 3k + 4
//1 2 3 4
//*** end ***

// Eigen::Quaternion order: x y z w