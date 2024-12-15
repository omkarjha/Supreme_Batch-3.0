#include <iostream>
using namespace std;

void counting(int e)
{
    int i, j;

    for (i = 1; i <= e; i++)
    {
        if (i == e)
        {
            cout << i;
        }
        else
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}

int main()
{
    // Using function to print counting from 1 to n which is defined in the above function
    int f;
    cout << "Enter the value upto which counting is required : ";
    cin >> f;

    cout << endl;

    counting(f);

    return 0;
}