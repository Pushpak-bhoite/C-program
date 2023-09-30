
#include <stdio.h>

int main() {
    int rows, spaces, stars;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
