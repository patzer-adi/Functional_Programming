#include "NumberToString.hpp"
#include <iostream>
using namespace std;

string NumberToString::ones(int n) {
    string w[] = {"", "one", "two", "three", "four", "five",
                  "six", "seven", "eight", "nine"};
    return w[n];
}

string NumberToString::tens(int n) {
    string w[] = {"", "", "twenty", "thirty", "forty", "fifty",
                  "sixty", "seventy", "eighty", "ninety"};
    return w[n];
}

string NumberToString::twoDigits(int n) {
    if (n == 0) return "";
    if (n < 10) return ones(n);
    if (n < 20) {
        string t[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                      "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        return t[n - 10];
    }
    string result = tens(n / 10);
    if (n % 10 != 0) result += " " + ones(n % 10);
    return result;
}

string NumberToString::threeDigits(int n) {
    if (n == 0) return "";
    string result = "";
    if (n >= 100) {
        result = ones(n / 100) + " hundred";
        n %= 100;
        if (n > 0) result += " ";
    }
    result += twoDigits(n);
    return result;
}

string NumberToString::convert(int number) {
    if (number == 0) return "zero";

    int n = number;
    bool negative = false;
    if (n < 0) { negative = true; n = -n; }

    string result = "";
    if (n >= 1000000000) { result += threeDigits(n / 1000000000) + " billion "; n %= 1000000000; }
    if (n >= 1000000) { result += threeDigits(n / 1000000) + " million "; n %= 1000000; }
    if (n >= 1000) { result += threeDigits(n / 1000) + " thousand "; n %= 1000; }
    result += threeDigits(n);

    while (!result.empty() && result.back() == ' ') result.pop_back();
    if (negative) result = "negative " + result;
    return result;
}

void NumberToString::run() {
    try {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        cout << convert(number) << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
