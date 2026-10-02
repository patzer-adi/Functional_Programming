// Haskell code converted to C++
// Original Haskell:
// triangleArea a b c = sqrt (s * (s-a) * (s-b) * (s-c))
//   where s = (a + b + c) / 2

#include "TriangleArea.hpp"
#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

void TriangleArea::run() {
    try {
        double a, b, c;
        cout << "Enter three sides: ";
        cin >> a >> b >> c;

        if (a <= 0 || b <= 0 || c <= 0)
            throw invalid_argument("Sides must be positive");
        if (a + b <= c || b + c <= a || a + c <= b)
            throw invalid_argument("Invalid triangle");

        // Heron's formula: s = (a+b+c)/2, area = sqrt(s*(s-a)*(s-b)*(s-c))
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area = " << area << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
