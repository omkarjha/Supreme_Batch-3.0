#include <iostream>
using namespace std;

int main()
{
    // Numeric Hollow Half Pyramid

    /*
        1
        12
        1 3
        1  4
        12345
    */

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Numeric Hollow Half Pyramid \n" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i || i == n - 1)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Numeric hollow inverted half pyramid

    /*
        5 4 3 2 1
        2     5
        3   5
        4 5
        5
    */

    cout << "Numeric hollow inverted half pyramid \n" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (i == 0 || j == i + 1 || j == n)
            {
                cout << j;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Numeric pattern Palindrome Equilateral

    return 0;
}