#include "LagrangeInterpolator.hpp"
#include <iostream>
using namespace std;

double LagrangeInterpolator::evaluate(double xval) {
    int n = x.size();
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i) term *= (xval - x[j]) / (x[i] - x[j]);
        }
        result += term;
    }
    return result;
}

void LagrangeInterpolator::run() {
    try {
        int n;
        cout << "Enter number of data points: ";
        cin >> n;
        if (n <= 0) throw invalid_argument("Number of points must be positive");

        cout << "Enter " << n << " data points (x y):" << endl;
        for (int i = 0; i < n; i++) {
            double xi, yi;
            cin >> xi >> yi;
            x.push_back(xi);
            y.push_back(yi);
        }

        double xval;
        cout << "Enter x value to evaluate: ";
        cin >> xval;
        cout << "f(" << xval << ") = " << evaluate(xval) << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
