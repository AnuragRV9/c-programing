#include <iostream>

void hbd(std::string name);

int main(int argc, char const *argv[])
{

    std::string name = "anurag";

    hbd(name);

    return 0;
}
void hbd(std::string name)
{
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
}