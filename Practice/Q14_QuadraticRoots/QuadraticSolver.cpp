#include "QuadraticSolver.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

void QuadraticSolver::run() {
    try {
        cout << "Enter coefficients a b c: ";
        cin >> a >> b >> c;

        if (a == 0) throw invalid_argument("Coefficient 'a' cannot be zero");

        double disc = b * b - 4 * a * c;
        cout << fixed << setprecision(2);

        if (disc > 0) {
            double r1 = (-b + sqrt(disc)) / (2 * a);
            double r2 = (-b - sqrt(disc)) / (2 * a);
            cout << "Roots are " << r1 << " and " << r2 << endl;
        } else if (disc == 0) {
            double r = -b / (2 * a);
            cout << "Roots are equal: " << r << endl;
        } else {
            double real = -b / (2 * a);
            double imag = sqrt(-disc) / (2 * a);
            cout << "Roots are " << real << " + " << imag << "i and "
                 << real << " - " << imag << "i" << endl;
        }
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
