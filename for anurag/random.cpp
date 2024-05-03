#include <iostream>
#include <ctime>
int main()
{
    srand(time(0));

    int num1 = (rand() % 6) + 1;

    switch (num1)
    {
    case 1:
        std::cout << "you lose!";
        break;
    case 2:
        std::cout << "you won last prize!";
        break;
    case 3:
        std::cout << "you won second last prize!";
        break;
    case 4:
        std::cout << "you won third prize!";
        break;
    case 5:
        std::cout << "you won second prize!";
        break;
    case 6:
        std::cout << "you won jakport!";
        break;
    }
    return 0;
}
