#include <stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == i || j == (10 - i))
                printf("*");
                else
                printf(" ");
        }
        printf("\n");
    }
}