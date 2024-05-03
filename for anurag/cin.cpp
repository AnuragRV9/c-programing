#include <iostream>
main(int argc, char const *argv[])
{
    std::string name;
    int age;

    std::cout << "what's your name: ";
    std::getline(std::cin,name);

    std::cout << "enter your age: ";
    std::cin >> age;

    std::cout << "hello " << name;
    std::cout << "\nyou are " << age << " year old";

    return 0;
}
