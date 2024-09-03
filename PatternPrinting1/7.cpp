#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows

    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
