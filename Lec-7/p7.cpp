#include <iostream>
using namespace std;

void odd_or_even()
{

    int n;
    cout << "Enter the number to check if it's odd or even : " << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The number : " << n << " is even!!!";
    }
    else
    {
        cout << "The number : " << n << " is odd!!!";
    }
}

int main()
{
    // Use function to find the number is odd or even

    odd_or_even();
    cout << endl;

    return 0;
}