#include <iostream>

int main() {
    int m = 4; // number of rows
    int n = 6; // number of columns

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == m - 1) {
                // Print '*' for the first and last row
                std::cout << "*";
            } else {
                // Print '*' for the first and last column, and space for others
                if (j == 0 || j == n - 1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
