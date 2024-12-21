#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    // Outer loop 
    for (int i = 0; i < n; i++)
    {
        // Loop for spaces 
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " "; 
        }

        // Loop for stars and hollow spaces 

        if (i == n - 1) // Special case for the last row
        {
            for (int j = 0; j < n; j++)
            {
                cout << "* "; // Print exactly `n` stars
            }
        }
        else
        {
            for (int j = 0; j < 2 * i + 1; j++)
            {
                if (j == 0 || j == 2 * i) // Print '*' at the boundaries
                {
                    cout << "* ";
                }
                else
                {
                    cout << " "; // Print hollow spaces
                }
            }
        }

        cout << endl; // Move to the next row
    }

    return 0;
}
