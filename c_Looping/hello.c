#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces before the asterisks
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Print asterisks in the current row
        for (j = i; j <= rows; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
