#include<iostream>
using namespace std;

int main()
{
    int row,i,j;
    cout << "Enter number of rows:";
    cin >> row;

    cout << "Numeric Full Pyramid \n"<< endl;
    /*
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    
    */

    for (i = 0; i < row; i++)
    {
        // space region
        for (j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        // number pattern
        for (j = 0; j < i + 1; j++)
        {
            cout << i + j + 1;
        }
        // reverse pattern
        int start = 2 * i;
        for (j = 0; j < i; j++)
        {

            cout << start;
            start--;
        }

        cout << endl;
    }
    cout << endl;

    cout << "Numeric Equilateral Palindrome Pattern \n" << endl;
    /*
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1

    */

    for (i = 0; i < row; i++)
    {
        // space region
        for (j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        // number pattern
        for (j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // reverse
        int rev = i;
        for (j = 0; j < i; j++)
        {
            cout << rev;
            rev--;
        }
        cout << endl;
    }
    cout << endl;

    cout << "Floyd's Triangle Pattern \n" << endl;
    /*
        1 
        2 3
        4 5 6 
        7 8 9 10
        11 12 13 14

    */
    int ans = 1;
    for (int i = 0; i < row; i++)
    {

        for (j = 0; j <= i; j++)
        {
            cout << ans << " ";
            ans++;
        }
        cout << endl;
    }
    cout << endl;

    cout << "Numeric Hollow Triangle \n" << endl;
    /*

        1
        1 2
        1  3
        1   4
        1 2 3 4 
    
    */

    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            // Print the first and last number of each row
            if (j == 1 || j == i + 1)
            {
                cout << j; // Print number
            }
            else if (i != row - 1)
            {
                cout << " "; // Print space for hollow part
            }
            else
            {
                cout << j; // Print numbers in the last row
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}