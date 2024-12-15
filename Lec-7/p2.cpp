#include <iostream>
using namespace std;

int addsum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;

    // Using function to add two numbers which is defined in the above function
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    int result = addsum(a, b);
    cout << "The sum of the two numbers is: " << result << endl;
    cout << endl;
    return 0;
}