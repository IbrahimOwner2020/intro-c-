#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello World";
    cout << str1 << endl;

    // string concutnation
    string str2 = "I am a C++ program";
    // string str3 = str1 + ", " + str2;
    string str3 = str1.append(", ").append(str2);
    cout << str3 << endl;

    // string length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    // size() is an alias of length()
    cout << "The length of the txt string is: " << txt.size() << endl;

    // string access
    string myName = "Ibrahim";
    cout << "The initial of my name is: " << myName[0] << endl;

    // Special characters
    string txt2 = "We are the so-called \"Vikings\" from the north.";
    cout << txt2 << endl;

    // USER INPUT
    // string firstName;
    // cout << "Enter your first name: ";
    // cin >> firstName;
    // cout << "Your name is " << firstName << endl;

    // entering multiple words
    string fullNames;
    cout << "Enter your full names: ";
    getline(cin, fullNames);
    cout << "Your names are " << fullNames;

    return 0;
}