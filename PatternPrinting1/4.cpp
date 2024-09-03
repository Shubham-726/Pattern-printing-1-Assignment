#include <stdio.h>

int main() {
    int n = 4;  // Input value for n

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {  // Odd rows: print numbers
            for (int j = 1; j <= i + (i - 1); j++) {
                printf("%d ", j);
            }
        } else {  // Even rows: print letters
            for (int j = 1; j <= i + (i - 1); j++) {
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
