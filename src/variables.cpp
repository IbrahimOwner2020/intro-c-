#include <iostream>
#include <string>
using namespace std;

int main()
{
    // variable declaration
    int A = 500;

    // print the value of a
    cout << A << endl;

    // type of data variable
    // string, int, float, double, char

    // string
    string name = "John Doe";
    cout << name << endl;

    // int
    int age = 20;
    cout << age << endl;

    // float
    float height = 1.75;
    cout << height << endl;

    // double
    double weight = 75.5;
    cout << weight << endl;

    // double vs float
    // They are both used to store floating point values, but with a slight difference in the range of digits they can store after the decimal point.
    // The float data type can store 7 digits after the decimal point, while the double data type can store 15 digits after the decimal point.

    char initial = 'I';
    cout << initial << endl;

    char grade = '&';
    cout << grade << endl;

    // Print users name
    cout << "Enter your name: " << name << ". An I am " << age << " years old. I am " << height << " meters tall and I weigh " << weight << " kilograms. My initial is " << initial << "." << endl;

    // declare multiple variables
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;

    // Assign one value to multiple values
    int a, b, c;
    a = b = c = 20;
    cout << a + b + c << endl;

    // const variable
    const string names = "kidibra";
    cout << names << endl;

    // boolean variable
    bool isMale = true;
    cout << isMale << endl;

    bool isFemale = false;
    cout << isFemale;

    return 0;
}