#include <iostream>
using namespace std;

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

int main()
{
    // Sum of even numbers upto n.
    int n;
    cout << "Enter the value upto which sum of even numbers is required: " << endl;
    cin >> n;

    cout << evensum(n);
    cout << endl;

    return 0;
}