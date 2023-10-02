#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the series
    int a = 1, b = 3, c = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a);
            int next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        printf("\n");
    }

    return 0;
}
