#include <stdio.h>
int main()
{
    int no = 5;
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= (no - i); j++)
        {
            printf("  ");
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}