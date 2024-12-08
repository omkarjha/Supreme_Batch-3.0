#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "Enter a and b : \n";
    cin >> a >> b;

    //Arithmetic Operator
    int sum = a+b;
    int diff = a-b;
    int prod = a*b;
    float div = a/b;
    double rem = a%b;

    cout << "The sum is : " << sum << endl << "The difference is : " << diff << endl << "The product is : " << prod << endl << "The division is : " << div << endl << "The remainder is : "<< rem << endl;

    //Relational Operator
    cout << "Relational Operator \n";
    cout << (a>b) << endl;
    cout << (a<b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;
    cout << (a==b) << endl;

    //Logical Operator
    cout << "Logical Operator \n";
    cout << (a>= 5 || b<2) << endl;
    cout << (a>= 5 && b<2) << endl;
    cout << !(a>= 5) << endl;
} 