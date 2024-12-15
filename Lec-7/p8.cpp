#include <iostream>
using namespace std;

void factorial()
{
    int num, i;
    cout << endl;

    cout << "Enter the number whose factorial needs to be calculated :" << endl;
    cin >> num;
    int fact = 1;

    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "The factorial of the number " << num << " is : " << fact << endl;
}

int main()
{
    // Use function to find the factorial of a number
    factorial();
    cout << endl;

    return 0;
}