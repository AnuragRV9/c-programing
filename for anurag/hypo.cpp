#include <iostream>
#include <cmath>
int main(int argc, char const *argv[])
{
    double a;
    double b;
    double c;

    std::cout << "enter height: "
              << "\n";
    std::cin >> a;

    std::cout << "enter base: "
              << "\n";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "your hypotenusse = " << c;
    return 0;
}
