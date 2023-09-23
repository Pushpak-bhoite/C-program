#include <stdio.h>
int main()
{
    char a;
    printf("Enter Char : ");
    scanf("%c", &a);
    if (a >= 48 && a <= 57)
    {
        printf("\nNumber");
    }else if (a >= 65 && a <= 90)
    {
        printf("\nCapital");
    }else if (a >= 97 && a <= 122)
    {
        printf("\nSmall char");
    }else{
        printf("\nInvalid");

    }

    return 0;
}