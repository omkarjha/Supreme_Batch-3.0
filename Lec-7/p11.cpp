#include <iostream>
using namespace std;

// student and grade problem using switch case

void printgrade()
{

    int marks;

    cout << "Enter the marks scored :";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "The marks entered is wrong....";
    }

    else
    {

        switch (marks / 10)
        {
        case 10:
        case 9:
            cout << "The grade is A";
            break;
        case 8:
            cout << "The grade is B";
            break;
        case 7:
            cout << "The grade is C";
            break;
        case 6:
            cout << "The grade is D";
            break;

        default:
            cout << "The grade is F";
            break;
        }
    }
}

int main()
{
    printgrade();
    return 0;
}