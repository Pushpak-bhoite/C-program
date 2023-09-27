#include <stdio.h>

void printDigitInWords(int digit) {
    switch (digit) {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:                                 
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            break;
    }
}

int main() {
    long long num;
    
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        printf("Zero\n");
        return 0;
    }

    if (num < 0) {
        printf("Negative ");
        num = -num; // Make the number positive for processing
    }

    long long reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    while (reversedNum > 0) {
        int digit = reversedNum % 10;
        printDigitInWords(digit);
        reversedNum /= 10;
    }

    printf("\n");

    return 0;
}
