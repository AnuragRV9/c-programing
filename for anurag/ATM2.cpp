#include <iostream>
#include <iomanip>
#include <limits>

constexpr int SHOW_BALANCE = 1;
constexpr int DEPOSIT = 2;
constexpr int WITHDRAW = 3;
constexpr int EXIT = 4;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
void displayMenu();
int getValidChoice();

int main()
{
    double balance = 0;
    int choice = 0;

    do{
        displayMenu();
        choice = getValidChoice();

        switch(choice){
            case SHOW_BALANCE: showBalance(balance);
                    break;
            case DEPOSIT: balance += deposit();
                    showBalance(balance);
                    break;
            case WITHDRAW: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case EXIT: std::cout << "Thanks for visiting!\n";
                    break;
            default:std::cout << "Invalid choice\n";
        }
    }while(choice != EXIT);

    return 0;
}
void showBalance(double balance){

    std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    while(amount <= 0){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "That's not a valid amount:\n";
        std::cout << "Enter amount to be deposited: ";
        std::cin >> amount;
    }

    return amount;
}
double withdraw(double balance){

    double amount = 0;

    while(true){
        std::cout << "Enter amount to be withdrawn: ";
        std::cin >> amount;

        if(amount > balance){
            std::cout << "insufficient funds\n";
        }
        else if(amount < 0){
            std::cout << "That's not a valid amount\n";
        }
        else{
            break;
        }
    }

    return amount;
}
void displayMenu(){
    std::cout << "******************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "******************\n";
    std::cout << SHOW_BALANCE << ". Show Balance\n";
    std::cout << DEPOSIT << ". Deposit Money\n";
    std::cout << WITHDRAW << ". Withdraw Money\n";
    std::cout << EXIT << ". Exit\n";
}
int getValidChoice(){
    int choice = 0;
    std::cin >> choice;

    while(std::cin.fail() || choice < 1 || choice > 4){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid choice. Please enter a number between 1 and 4:\n";
        std::cin >> choice;
    }

    return choice;
}