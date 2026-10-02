#include "Calculator.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

void Calculator::run() {
    try {
        cout << "Enter num1 operator num2: ";
        cin >> num1 >> op >> num2;

        double result;
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0)
                    throw runtime_error("divide by zero exception!!!");
                result = num1 / num2;
                break;
            default:
                throw invalid_argument("ERROR: unknown operator!!!");
        }

        cout << result << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}
