#include <iostream>
using namespace std;

int main(){
    int score;
    int b =7;

    cout << "Enter the age of the candidate : ";
    cin >> score;

    if (score >= 18 )
    {
        
        cout << "Candidate is eligible to vote..";
    }
    else
    {
        cout << "Candidate is not eligible to vote...";   
    }
    return 0;
}