#ifndef FORMATTER_HPP
#define FORMATTER_HPP
#include<string>
using namespace std;
class Formatter
{
private:
    string input;
public:
    Formatter(string str);
    string NumConvert();
};
#endif