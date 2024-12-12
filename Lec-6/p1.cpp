#include<iostream>
using namespace std;

int main()
{

    int a = 11;
    int b = 7;

    cout << "AND Operator" << endl;
    cout << (a && b) << endl;
    cout << "OR Operator" << endl;
    cout << (a || b) << endl;
    cout << "NOT Operator" << endl;
    cout << (~ a) << endl;
    cout << "BITWISE Operator" << endl;
    cout << (a ^b) << endl;


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

    return 0;
}