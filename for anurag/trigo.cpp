#include <iostream>
int main(int argc, char const *argv[])
{
    double height;
    double base;
    double hypo;
    double sin;
    double cos;
    double tan;
    double a;
    
    std::cout << "enter height: ";
    std::cin >> height;

    std::cout << "enter base: ";
    std::cin >> base;

    std::cout << "enter hypotenuse: ";
    std::cin >> hypo;

    std::cout << "what you want to know \n"
              << "1.sin\n"
              << "2.cos\n"
              << "3.tan\n";
    std::cin >> a;

    if (a == 1)
    {
        sin = height / hypo;
        std::cout << "sin = " << sin;
    }
    else if (a == 2)
    {
        cos = base / hypo;
        std::cout << "cos = " << cos;
    }
    else if (a == 3)
    {
        tan = height / base;
        std::cout << "tan = " << tan;
    }
    else
    {
        std::cout << "enter velid number!";
    }

    return 0;
}
