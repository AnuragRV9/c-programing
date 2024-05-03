#include <iostream>
// int main(int argc, char const *argv[])
// {
//     std::string name;

//     while (name.empty())
//     {
//         std::cout << "enuter your name: ";
//         std::getline(std::cin ,name);
//     }

//     std::cout << "hello " << name;

//     return 0;
// }

int main(int argc, char const *argv[])
{
    int num;
    do
    {
        std::cout << "enter a posite number: ";
        std::cin >> num;

    } while (num < 0);

            std::cout
        << "your no. is " << num;
    return 0;
}
