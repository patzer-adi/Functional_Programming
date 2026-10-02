#include "Palindrome.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

bool Palindrome::check() {
    // Remove spaces and convert to lowercase
    string cleaned = "";
    for (char c : text) {
        if (c != ' ')
            cleaned += tolower(c);
    }

    // Check palindrome
    int n = cleaned.size();
    for (int i = 0; i < n / 2; i++) {
        if (cleaned[i] != cleaned[n - 1 - i])
            return false;
    }
    return true;
}

void Palindrome::run() {
    try {
        cout << "Enter text: ";
        getline(cin, text);

        if (text.empty())
            throw invalid_argument("Input cannot be empty");

        if (check())
            cout << "Palindrome!" << endl;
        else
            cout << "No" << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
