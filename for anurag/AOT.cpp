#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double AOT;
    double base;
    double height;

    std::cout << "enter base: ";
    std::cin >> base;

    std::cout<<"enter height: ";
    std::cin>>height;

    AOT=(0.5)*base*height;
    std::cout << "area of triangle is = " << AOT;
    return 0;
}
