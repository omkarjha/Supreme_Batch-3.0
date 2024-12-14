#include <iostream>
using namespace std;

// Function & Problem Statements
void printname()
{
    cout << "Chandler" << endl;
}

int addsum(int x, int y)
{
    return x + y;
}

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

int evensum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i += 2)
    {
        sum += i;
    }
    cout << "The sum of the even numbers upto " << n << " is:";
    return sum;

}
void circlearea()
{
    int r;
    cout << "Enter the radius of the circle:";
    cin >> r;
    cout << endl;
    int area = 3.14 * r * r;
    cout << "Area of the circle :"<<endl;
    cout << area << endl;

}

int main()
{
    int a, b;
    // Using function to print a name which is defined in the above function
    printname();
    printname();
    cout << endl;

    // Using function to add two numbers which is defined in the above function
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    int result = addsum(a, b);
    cout << "The sum of the two numbers is:" << result << endl;
    cout << endl;

    // Using function to find max of two numbers which is defined in the above function
    int p, q, r;
    cout << "Enter the first number:" << endl;
    cin >> p;
    cout << "Enter the second number:" << endl;
    cin >> q;
    cout << "Enter the third number:" << endl;
    cin >> r;

    int max = findmax(p, q, r);

    cout << "The maximum of the three numbers is :" << max << endl;
    cout << endl;

    // Using function to print counting from 1 to n which is defined in the above function
    int f;
    cout << "Enter the value upto which counting is required :";
    cin >> f;

    cout << endl;

    counting(f);

    // Sum of even numbers upto n.
    int n;
    cout << "Enter the value upto which sum of even numbers is required:" << endl;
    cin >> n;

    cout << evensum(n);
    cout << endl;

    // Use function to find area of circle

    circlearea();

    return 0;
}