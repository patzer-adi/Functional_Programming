#include "LeapYear.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

void LeapYear::run() {
    try {
        cout << "Enter a 4-digit positive integer (>1500): ";
        cin >> year;

        if (year < 1000 || year > 9999)
            throw invalid_argument("Invalid input (not a 4-digit number)");
        if (year <= 1500)
            throw invalid_argument("Year must be greater than 1500");

        bool leap = (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);

        if (leap)
            cout << year << " is a Leap year" << endl;
        else
            cout << year << " is Not a leap year" << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
