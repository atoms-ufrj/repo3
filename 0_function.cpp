#include <iostream>

double myFunc(double x)
{
    return x * x;
}

int main()
{
    double x = 3.0;
    double y = myFunc(x);
    std::cout << "x is " << x << ", y is " << y << std::endl;
    
    std::cout << "Finishing with success!\n\n";
}