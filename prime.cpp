#include <iostream>
using namespace std;

bool checkPrime(int num) {
    if (num < 2) return false; // Numbers less than 2 are not prime

    // Loop to check divisibility
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false; // If divisible, not a prime number
        }
    }
    return true; // If not divisible, it's a prime
}

int main() {
    int n;
    cout << "Enter a number to check: "; // Taking user input 
    cin >> n;

    if (checkPrime(n))
        cout << "Yes! " <<  n << " is a prime number.\n";
    else
        cout << "No! " <<  n << " is not a prime number.\n";

    return 0;
}