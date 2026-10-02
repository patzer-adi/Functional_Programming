#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include<string>
using namespace std;
class Converter
{
private:
    double x;
    double y; 
public:
    Converter(double number, double base);
    string NumConvert();
};
#endif