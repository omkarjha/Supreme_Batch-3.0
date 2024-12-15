#include <iostream>
using namespace std;

int findmax(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    else
    {
        return c;
    }
}

int main()
{
    // Using function to find max of two numbers which is defined in the above function
    int p, q, r;
    cout << "Enter the first number:" << endl;
    cin >> p;
    cout << "Enter the second number:" << endl;
    cin >> q;
    cout << "Enter the third number:" << endl;
    cin >> r;

    int max = findmax(p, q, r);

    cout << "The maximum of the three numbers is : " << max << endl;
    cout << endl;
    return 0;
}