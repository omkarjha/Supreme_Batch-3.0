#include <iostream>
using namespace std;

int main()
{
    /*
        Hollow Butterfly Pattern:
        *       *
        * *   * *
        *   *   *
        *   *   *
        * *   * *
        *       *
    */

    cout << "The hollow butterfly pattern:" << endl;

    int n; // Number of rows for the top half of the butterfly

    cout << "Enter the number of rows :";
    cin >> n;

    // Top half of the hollow butterfly
    for (int i = 0; i < n; i++)
    {
        // Left wing
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        // Spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << "  ";
        }
        // Right wing
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Bottom half of the hollow butterfly
    for (int i = n; i >= 1; i--)
    {
        // Left wing
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        // Spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << "  ";
        }
        // Right wing
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}