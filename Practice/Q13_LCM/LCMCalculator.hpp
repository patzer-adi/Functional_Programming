#ifndef LCMCALCULATOR_HPP
#define LCMCALCULATOR_HPP

using namespace std;

class LCMCalculator {
private:
    int a, b;
    int gcd(int x, int y);
    int compute();
public:
    void run();
};

#endif
