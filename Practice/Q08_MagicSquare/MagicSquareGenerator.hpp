#ifndef MAGICSQUAREGENERATOR_HPP
#define MAGICSQUAREGENERATOR_HPP

#include <vector>
using namespace std;

class MagicSquareGenerator {
private:
    int n;
    vector<vector<int>> grid;
    void generate();
    void print();
public:
    void run();
};

#endif
