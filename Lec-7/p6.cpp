#include <iostream>
using namespace std;

void circlearea()
{
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << endl;
    float area = 3.14 * r * r;
    cout << "Area of the circle : " << endl;
    cout << area << endl;
}

int main()
{
    // Use function to find area of circle

    circlearea();
    cout << endl;

    return 0;
}