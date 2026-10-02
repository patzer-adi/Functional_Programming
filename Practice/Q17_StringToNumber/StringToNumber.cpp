#include "StringToNumber.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int StringToNumber::convert(const string& input) {
    map<string, int> wordMap;
    wordMap["zero"] = 0; wordMap["one"] = 1; wordMap["two"] = 2;
    wordMap["three"] = 3; wordMap["four"] = 4; wordMap["five"] = 5;
    wordMap["six"] = 6; wordMap["seven"] = 7; wordMap["eight"] = 8;
    wordMap["nine"] = 9; wordMap["ten"] = 10; wordMap["eleven"] = 11;
    wordMap["twelve"] = 12; wordMap["thirteen"] = 13; wordMap["fourteen"] = 14;
    wordMap["fifteen"] = 15; wordMap["sixteen"] = 16; wordMap["seventeen"] = 17;
    wordMap["eighteen"] = 18; wordMap["nineteen"] = 19; wordMap["twenty"] = 20;
    wordMap["thirty"] = 30; wordMap["forty"] = 40; wordMap["fifty"] = 50;
    wordMap["sixty"] = 60; wordMap["seventy"] = 70; wordMap["eighty"] = 80;
    wordMap["ninety"] = 90;

    string s = input;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    bool negative = false;
    if (s.find("negative") == 0) { negative = true; s = s.substr(9); }

    istringstream iss(s);
    string word;
    int result = 0, current = 0;

    while (iss >> word) {
        if (wordMap.count(word)) current += wordMap[word];
        else if (word == "hundred") current *= 100;
        else if (word == "thousand") { current *= 1000; result += current; current = 0; }
        else if (word == "million") { current *= 1000000; result += current; current = 0; }
        else if (word == "billion") { current *= 1000000000; result += current; current = 0; }
    }

    result += current;
    if (negative) result = -result;
    return result;
}

void StringToNumber::run() {
    try {
        string input;
        cout << "Enter number in words: ";
        getline(cin, input);
        if (input.empty()) throw invalid_argument("Input cannot be empty");
        cout << convert(input) << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
