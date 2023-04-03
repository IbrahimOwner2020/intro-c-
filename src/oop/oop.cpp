#include <iostream>
using namespace std;

// Example of a class
class car
{
public:
    int year;
    string name;
    // method in
    void sayHello()
    {
        cout << "Hello " << this->name << endl;
    };
    void maxSpeed(int speed);
    car(string name, int year, int topSpeed)
    {
        this->name = name;
        this->year = year;
        this->maxSpeed(topSpeed);
        this->sayHello();
    }
};

void car::maxSpeed(int speed)
{
    cout << this->name << " can reach a top speed of " << speed << "kph" << endl;
}

int main()
{
    // Creating an object from the class
    car car1("Jeep", 1999, 240);

    // Printing the values of the atributes
    cout << "The car " << car1.name << ", was manufactured in " << car1.year << endl;

    return 0;
}