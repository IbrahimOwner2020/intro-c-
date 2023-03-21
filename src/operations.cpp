#include <iostream>
using namespace std;

// Functin to print true or false
string printBool(bool b)
{
    return b ? "true" : "false";
}

int main()
{
    // ARITHMETIC OPERATIONS
    int a = 10;
    int b = 5;
    int c = a + b;
    cout << "a + b = " << c << endl;
    c = a - b;
    cout << "a - b = " << c << endl;
    c = a * b;
    cout << "a * b = " << c << endl;
    c = a / b;
    cout << "a / b = " << c << endl;
    c = a % b;
    cout << "a % b = " << c << endl;
    cout << "a++ = " << a++ << endl;
    cout << "a-- = " << a-- << endl;

    // ASSIGNMENT OPERATIONS
    int d = 10;
    d ^= 5;
    cout << "d ^= 5 = " << d << endl;
    d >>= 5;
    cout << "d >>= 5 = " << d << endl;
    d <<= 5;
    cout << "d <<= 5 = " << d << endl;
    d |= 5;
    cout << "d |= 5 = " << d << endl;
    d += 5;
    cout << "d += 5 = " << d << endl;
    d -= 5;
    cout << "d -= 5 = " << d << endl;
    d *= 5;
    cout << "d *= 5 = " << d << endl;
    d /= 5;
    cout << "d /= 5 = " << d << endl;
    d &= 5;
    cout << "d &= 5 = " << d << endl;
    d %= 5;
    cout << "d %= 5 = " << d << endl;

    // COMPARISON OPERATIONS
    int e = 10;
    int f = 5;
    cout << "e == f = " << printBool(e == f) << endl;
    cout << "e != f = " << printBool(e != f) << endl;
    cout << "e > f = " << printBool(e > f) << endl;
    cout << "e < f = " << printBool(e < f) << endl;
    cout << "e >= f = " << printBool(e >= f) << endl;
    cout << "e <= f = " << printBool(e <= f) << endl;

    // LOGICAL OPERATIONS
    int g = 10;
    int h = 5;
    cout << "g && h = " << printBool(g && h) << endl;
    cout << "g || h = " << printBool(g || h) << endl;
    cout << "!g = " << printBool(!g) << endl;   
    

    return 0;
}