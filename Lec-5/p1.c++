#include <iostream>
using namespace std;

int main(){

    //Integer type variable declared
    int age;
    int b =7;

    //Take input for integer variable
    cout << "Enter the age of the candidate : " << endl;
    cin >> age;

    //Condition for voting eligibility
    if (age >= 18 )
    {
        
        cout << "Candidate is eligible to vote..";
    }
    else
    {
        cout << "Candidate is not eligible to vote...";   
    }
    return 0;
}