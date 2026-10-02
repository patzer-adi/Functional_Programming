#ifndef NUMBERTOSTRING_HPP
#define NUMBERTOSTRING_HPP

#include <string>
using namespace std;

class NumberToString {
private:
    string ones(int n);
    string tens(int n);
    string twoDigits(int n);
    string threeDigits(int n);
    string convert(int number);
public:
    void run();
};

#endif
