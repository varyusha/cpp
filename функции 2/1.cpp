#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    if (number == 0 || number == 1) { return false; }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
	int number;

    cout << "Enter number: ";
    cin >> number;
    if (isPrime(number)) {
        cout << "The number is prime";
    }
    else { cout << "The number is not prime"; }
    return 0;

}