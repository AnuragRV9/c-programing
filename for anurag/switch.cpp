#include <iostream>
int main(int argc, char const *argv[])
{
    int weeks;
    std::cout << "what day of week you want to know: ";
    std::cin >> weeks;

    switch (weeks)
    {
    case 1:
        std::cout << "it's monday";
        break;
    case 2:
        std::cout << "it's tuesday";
        break;
    case 3:
        std::cout << "it's wenesday";
        break;
    case 4:
        std::cout << "it's thrusday";
        break;
    case 5:
        std::cout << "it's friday";
        break;
    case 6:
        std::cout << "it's saturday";
        break;
    case 7:
        std::cout << "it's sunday";
        break;
    default:
        std::cout << "enter number only 1 to 7 ";
        break;
    }
    return 0;
}
