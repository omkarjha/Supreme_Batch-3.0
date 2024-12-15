#include<iostream>
using namespace std;

void checkprime() {
    int num;
    cout << "Enter the number to check if it's prime or not: ";
    cin >> num;

    // Handle edge cases
    if (num <= 1) {
        cout << "The number " << num << " is not prime!" << endl;
        return;
    }

    bool isPrime = true;

    // Check divisors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "The number " << num << " is prime!" << endl;
    else
        cout << "The number " << num << " is not prime!" << endl;
}

int main() {
    checkprime();
    return 0;
}
