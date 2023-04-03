#include <iostream>
using namespace std;

int main()
{
    // if statement syntaxt
    // if (condition) {
    //     block of code to be executed if the condition is true
    // }

    // Example
    if (20 > 18)
    {
        cout << "20 is the greatest number" << endl;
    }
    else if (18 > 20)
    {
        cout << "20 is not the greatest number" << endl;
    }
    else
    {
        cout << "Something went wrong" << endl;
    }

    // short term of if statement
    // example
    cout << ((3 < 4) ? "3 is bigger" : "3 is smaller") << endl;

    return 0;
}