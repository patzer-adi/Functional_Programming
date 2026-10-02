#include "GCDCalculator.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int GCDCalculator::compute() {
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

void GCDCalculator::run() {
    try {
        cout << "Enter two positive integers: ";
        cin >> a >> b;
        if (a < 0 || b < 0) throw invalid_argument("Numbers must be non-negative");
        cout << "GCD = " << compute() << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
