#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int b = 7;

    cout << "AND Operator" << endl;
    cout << (a && b) << endl;
    cout << "OR Operator" << endl;
    cout << (a || b) << endl;
    cout << "NOT Operator" << endl;
    cout << (~a) << endl;
    cout << "BITWISE Operator" << endl;
    cout << (a ^ b) << endl;

    cout << a << endl;
    cout << "POST Increment Operator" << endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << "PRE Increment Operator" << endl;
    cout << ++a << endl;
    cout << "POST Decrement Operator" << endl;
    cout << a-- << endl;
    cout << a << endl;
    cout << "PRE Decrement Operator" << endl;
    cout << --a << endl;

    cout << (++a) * (++a);

    int b = 5;

    // error: redeclaration of 'int b'
    //    33 |     int b = 5;
    //       |         ^
    // tempCodeRunnerFile.cpp:8:9: note: 'int b' previously declared here
    //     8 |     int b = 7;
    b = 6;
    cout << b << endl;

    return 0;
}