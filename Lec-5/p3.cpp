#include<iostream>
using namespace std;

int main()
{
    int i;

    //Printing my name 5 times using for loop

    for(i=0;i<5;i++){
        cout << "My name"<< endl;
    }

    cout << endl;

    //Reverse loop

    for(i;i>0;i--){
        cout << i << endl;
    }
    cout << endl;
    //Multiplication table for 2 using for loop

    cout << "Multiplication table for 2 using for loop" << endl << endl;

    for ( i = 1; i <= 10; i++)
    {
        /* code */
        cout << "2 * " << i << " = " << 2*i << endl; 
    }
    
    return 0;
}