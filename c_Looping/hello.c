#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf("-");
        }

        // Print asterisks for the current row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
