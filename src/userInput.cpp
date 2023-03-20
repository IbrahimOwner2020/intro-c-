#include <iostream>
using namespace std;

int main()
{
    // input from user
    // cout stands for see out
    cout << "Enter your name: ";
    string name;

    // cin stands for see in
    cin >> name;
    cout << "Hello " << name << endl;

    // A simple additional calculator
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is " << num1 + num2 << endl;

    return 0;
}