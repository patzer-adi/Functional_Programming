#include "PrimeFactorizer.hpp"
#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

bool PrimeFactorizer::isPrime() {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i <= (int)sqrt(number); i += 2)
        if (number % i == 0) return false;
    return true;
}

vector<int> PrimeFactorizer::factorize() {
    vector<int> factors;
    int n = number;
    while (n % 2 == 0) { factors.push_back(2); n /= 2; }
    for (int i = 3; i <= (int)sqrt(n); i += 2)
        while (n % i == 0) { factors.push_back(i); n /= i; }
    if (n > 1) factors.push_back(n);
    return factors;
}

void PrimeFactorizer::run() {
    try {
        cout << "Enter a positive integer: ";
        cin >> number;

        if (number <= 0) throw invalid_argument("Number must be a positive integer");
        if (number == 1) throw invalid_argument("1 is neither prime nor composite");

        if (isPrime()) {
            cout << number << " is a prime number." << endl;
            cout << "Prime factors: " << number << endl;
        } else {
            cout << number << " is not a prime number." << endl;
            vector<int> factors = factorize();
            cout << "Prime factors: ";
            for (int i = 0; i < (int)factors.size(); i++) {
                cout << factors[i];
                if (i < (int)factors.size() - 1) cout << " ";
            }
            cout << endl;
        }
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
