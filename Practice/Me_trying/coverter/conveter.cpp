#include "converter.hpp"
#include<string>
#include<algorithm>
#include<cmath>

Converter :: Converter(double a, double b)
{
    x = a;
    y = b;
}

string Converter :: NumConvert()
{
    int num = (int) x;
    int base = (int) y;
    string result = "";
    string chars = "0123456789ABCDEF";
    while(num > 0)
    {
        int remainder = num % base;
        result += chars[remainder];
        num /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}