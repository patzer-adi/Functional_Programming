// Haskell code converted to C++
// Original Haskell: properFraction gives integer and fractional parts
// Then reduce fractional part to co-prime A/B form
// I + A/B where A and B are co-prime, B != 0

#include "MixedRationalForm.hpp"
#include <iostream>
using namespace std;

int MixedRationalForm::gcd(int a, int b) {
    // Haskell: gcd a 0 = a; gcd a b = gcd b (mod a b)
    if (b == 0) return a;
    return gcd(b, a % b);
}

void MixedRationalForm::run() {
    try {
        string input;
        cout << "Enter a positive real number: ";
        cin >> input;

        size_t dot = input.find('.');
        if (dot == string::npos)
            throw invalid_argument("Input must have a decimal point");

        string intPart = input.substr(0, dot);
        string fracPart = input.substr(dot + 1);

        // properFraction equivalent
        int I = stoi(intPart);
        int A = stoi(fracPart);

        int B = 1;
        for (int i = 0; i < (int)fracPart.size(); i++)
            B *= 10;

        if (A == 0) {
            cout << I << endl;
            return;
        }

        // Reduce to co-prime form
        int g = gcd(A, B);
        A /= g;
        B /= g;

        if (I != 0)
            cout << I << " + " << A << " / " << B << endl;
        else
            cout << A << " / " << B << endl;

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
