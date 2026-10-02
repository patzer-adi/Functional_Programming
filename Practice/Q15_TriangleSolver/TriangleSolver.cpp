#include "TriangleSolver.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>
using namespace std;

void TriangleSolver::run() {
    try {
        cout << "Enter three sides: ";
        cin >> a >> b >> c;

        if (a <= 0 || b <= 0 || c <= 0)
            throw invalid_argument("Invalid input");
        if (a + b <= c || b + c <= a || a + c <= b)
            throw invalid_argument("Invalid input");

        int A = (int)round(acos((b*b + c*c - a*a) / (2*b*c)) * 180.0 / M_PI);
        int B = (int)round(acos((a*a + c*c - b*b) / (2*a*c)) * 180.0 / M_PI);
        int C = (int)round(acos((a*a + b*b - c*c) / (2*a*b)) * 180.0 / M_PI);

        cout << A << " " << B << " " << C << " degrees" << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
