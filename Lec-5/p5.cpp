#include <iostream>
using namespace std;

int main()
{
    /*
        *
       * *
      * * *
     * * * *
     
    */

    int row, i, j;
    cout << "Enter the number of row:";
    cin >> row;

    cout << "Full Pyramid \n"
         << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    cout << endl;

    /*
     * * * * 
      * * *
       * *
        *
     */

    cout << "Inverted Full Pyramid \n"
         << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < row - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    /*
        *
       * *
      * * *
     * * * *
     * * * * 
      * * *
       * *
        *
    
    */

    cout << "Solid Diamond \n"
         << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < row - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    /*
            *
          *   *
        *       *
       *         *
        *       *
         *    *
          *  *
           * 
    */

    cout << "Hollow Diamond \n"
         << endl;

    // Upper part of the diamond
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (i = row - 2; i >= 0; i--)
    {
        for (j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}