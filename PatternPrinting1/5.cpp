#include <iostream>

int main() {
    int n = 4;

    // Print the upper half of the pattern
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Print the lower half of the pattern
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
