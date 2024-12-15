#include <iostream>
using namespace std;

// Printing Pattern using loops

int main()
{
    int row, column, i, j;

    cout << "Solid Rectangle \n"
         << endl;

    cout << "Enter the number of rows :";
    cin >> row;

    cout << "Enter the number of columns:";
    cin >> column;

    /*
     *****
     *****
     *****
     */

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Solid Square" << endl;
    int side;

    cout << "Enter the number of sides of square:";
    cin >> side;
    cout << endl;

    /*  
     ***
     ***
     ***
     */

    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Hollow Rectangle" << endl;

    /*
     * * *
     *   *
     * * *
     */

    for (i = 0; i < row; i++)
    {
        if (i == 0 || i == row - 1)
        {
            for (j = 0; j < column; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (j = 0; j < column - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Half Pyramid" << endl;

    /*

    *
    **
    ***

    */

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Inverted Half Pyramid
    cout << "Inverted Half Pyramid" << endl;

    /*

     *****
     ****
     ***
     **
     *

    */

    for (i = row; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Numeric Half Pyramid";

    // Numeric Half Pyramid

    /*
        1
        1 2
        1 2 3
        1 2 3 4
    */

    for (i = 0; i < row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Numeric Reverse Half Pyramid" << endl;

    // Numeric Reverse Half Pyramid

    /*
         1 2 3 4
         1 2 3
         1 2
         1
    */

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}