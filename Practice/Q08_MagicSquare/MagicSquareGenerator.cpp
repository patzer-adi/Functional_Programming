#include "MagicSquareGenerator.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

void MagicSquareGenerator::generate() {
    grid.assign(n, vector<int>(n, 0));
    int row = 0, col = n / 2;

    for (int num = 1; num <= n * n; num++) {
        grid[row][col] = num;
        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;
        if (grid[newRow][newCol] != 0) row = (row + 1) % n;
        else { row = newRow; col = newCol; }
    }
}

void MagicSquareGenerator::print() {
    int magic = n * (n * n + 1) / 2;
    cout << "Magic Square of order " << n << " (magic constant = " << magic << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << setw(4) << grid[i][j];
        cout << endl;
    }
}

void MagicSquareGenerator::run() {
    try {
        cout << "Enter odd N: ";
        cin >> n;
        if (n <= 0 || n % 2 == 0)
            throw invalid_argument("N must be a positive odd number");
        generate();
        print();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
