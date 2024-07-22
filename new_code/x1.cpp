
#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::ArrayXd myArray1D(5);
    myArray1D = Eigen::ArrayXd::LinSpaced(5, 1, 5);
    std::cout << "myArray1D = " << myArray1D.transpose() << std::endl;

    Eigen::ArrayXXd myArray2D(2, 3);
    myArray2D = Eigen::ArrayXXd::Random(2, 3);
    std::cout << "myArray2D = \n" << myArray2D << std::endl;
}