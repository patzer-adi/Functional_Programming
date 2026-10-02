#include "TriangleType.hpp"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void TriangleType::run() {
    try {
        cout << "Enter three sides: ";
        cin >> a >> b >> c;

        if (a <= 0 || b <= 0 || c <= 0)
            throw invalid_argument("Invalid input");
        if (a + b <= c || b + c <= a || a + c <= b)
            throw invalid_argument("Invalid input");

        // Sort sides so that c is the largest
        double sides[3] = {a, b, c};
        sort(sides, sides + 3);
        double s1 = sides[0], s2 = sides[1], s3 = sides[2];

        cout << "Triangle types: ";

        // Check equilateral
        if (fabs(a - b) < 1e-6 && fabs(b - c) < 1e-6) {
            cout << "Equilateral" << endl;
            return;
        }

        // Check isosceles or scalene
        if (fabs(a - b) < 1e-6 || fabs(b - c) < 1e-6 || fabs(a - c) < 1e-6)
            cout << "Isosceles ";
        else
            cout << "Scalene ";

        // Check right-angled, obtuse or acute
        double sq = s1 * s1 + s2 * s2;
        double sq3 = s3 * s3;

        if (fabs(sq - sq3) < 1e-6)
            cout << "Right-angled" << endl;
        else if (sq3 > sq)
            cout << "Obtuse-angled" << endl;
        else
            cout << "Acute-angled" << endl;

    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
