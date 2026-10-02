#include "LCMCalculator.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int LCMCalculator::gcd(int x, int y) {
    while (y != 0) { int t = y; y = x % y; x = t; }
    return x;
}

int LCMCalculator::compute() {
    return (a * b) / gcd(a, b);
}

void LCMCalculator::run() {
    try {
        cout << "Enter two positive integers: ";
        cin >> a >> b;
        if (a <= 0 || b <= 0) throw invalid_argument("Numbers must be positive");
        cout << "LCM = " << compute() << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
