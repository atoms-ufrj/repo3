// create a class and use it
// the class receives a double x and returns x+1

#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass(double &x);
    void print();


private:
    double &x;
    double y() const { return x + 1; }
    // double y;
};

MyClass::MyClass(double &x)
    : x{x}
{
    // y = x + 1;
}

void MyClass::print()
{
    cout << " x = " << x << endl;
    cout << " y = " << y() << endl;
}

int main()
{
    double x{1.2};
    MyClass myObj{x};
    myObj.print();

    x = 1.3;
    myObj.print();

    return 0;
}
