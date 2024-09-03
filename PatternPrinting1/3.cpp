#include <iostream>

int main() {
    int n = 4;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << char('A' + j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
