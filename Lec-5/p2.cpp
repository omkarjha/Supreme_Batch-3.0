#include<iostream>
using namespace std;

//A program to check the grade of the student usin if & else-if statement

int main()
{
    int marks;
    cout << "Enter the marks obtained by the student:";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "The grade of the student is A!!!";
    }
    else if (marks >=80)
    {
        cout << "The grade of the student is B!!!";
    }
        else if (marks >=60)
    {
        cout << "The grade of the student is C!!!";
    }
        else if (marks >=40)
    {
        cout << "The grade of the student is D!!!";
    }
    else
    {
        cout <<"The student has failed";
    }
    return 0;
}