#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";  // Print the current row number followed by a space
        }
        cout << endl;  // Move to the next line after printing a row
    }

    return 0;
}
