// Haskell code converted to C++
// Original Haskell: lcm a b = div (a * b) (gcd a b)

#include "LCM.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int LCM::gcd(int x, int y) {
    // Haskell: gcd a 0 = a; gcd a b = gcd b (mod a b)
    if (y == 0) return x;
    return gcd(y, x % y);
}

int LCM::compute() {
    // Haskell: lcm a b = div (a * b) (gcd a b)
    return (a * b) / gcd(a, b);
}

void LCM::run() {
    try {
        cout << "Enter two positive integers: ";
        cin >> a >> b;
        if (a <= 0 || b <= 0)
            throw invalid_argument("Numbers must be positive");
        cout << "LCM = " << compute() << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
