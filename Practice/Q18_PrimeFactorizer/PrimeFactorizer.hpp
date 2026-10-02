#ifndef PRIMEFACTORIZER_HPP
#define PRIMEFACTORIZER_HPP

#include <vector>
using namespace std;

class PrimeFactorizer {
private:
    int number;
    bool isPrime();
    vector<int> factorize();
public:
    void run();
};

#endif
