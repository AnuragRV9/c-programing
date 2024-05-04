#include <iostream>
#include <string>
using namespace std;

double add(double a, double b);

int main()
{
    double a;
    double b;

    cout << "enter #1= " << endl;
    cin >> a;
    cout << "enter #2= " << endl;
    cin >> b;
    add(a, b);
    return 0;
}
double add(double a, double b)
{
    double c;
    c = a + b;
    cout << "the sum is " << c << endl;
    return c;
};