#ifndef LAGRANGEINTERPOLATOR_HPP
#define LAGRANGEINTERPOLATOR_HPP

#include <vector>
using namespace std;

class LagrangeInterpolator {
private:
    vector<double> x;
    vector<double> y;
    double evaluate(double xval);
public:
    void run();
};

#endif
