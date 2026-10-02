#include "LeapYearChecker.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

void LeapYearChecker::run() {
    try {
        cout << "Enter a 4-digit year: ";
        cin >> year;

        if (year < 1000 || year > 9999)
            throw invalid_argument("Invalid input (not a 4-digit number)");

        bool leap = (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);

        if (leap) cout << "Leap year" << endl;
        else cout << "Not a leap year" << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
