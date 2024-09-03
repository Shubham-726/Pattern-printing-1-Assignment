#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Input value for n

    for (int i = n; i >= 1; i--) {  // Loop from n down to 1
        for (int j = 1; j <= i; j++) {  // Loop from 1 up to i
            cout << j << " ";  // Print the current number
        }
        cout << endl;  // Move to the next line after printing a row
    }

    return 0;
}
