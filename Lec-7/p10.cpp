#include<iostream>
using namespace std;

void printprime() {
    int num;

    cout << "Enter the number up to which you want to print prime numbers: ";
    cin >> num;

    if (num < 2) {
        cout << "There are no prime numbers less than 2." << endl;
        return;
    }

    cout << "Prime numbers from 1 to " << num << " are:" << endl;

    // Loop through all numbers from 2 to num
    for (int i = 2; i <= num; i++) {
        bool isprime = true;

        // Check if 'i' is a prime number
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }

        // If 'i' is prime, print it
        if (isprime) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    printprime();
    return 0;
}
