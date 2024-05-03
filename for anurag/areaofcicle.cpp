#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double AOC;
    int PI;
    double r;

    std::cout << "enter radius: ";
    std::cin >> r;

    PI = 3.14;
    AOC = PI * (pow(r, 2));
    std::cout << "area of circle is = " << AOC;
    return 0;
}
