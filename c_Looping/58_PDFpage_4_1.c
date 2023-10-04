#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
        if ((i <= 5) && (((j <= 4 + i && j >= 6 - i) && ((j % 2 == 1 && i % 2 == 1) || (j % 2 == 0 && i % 2 == 0))))

         || ((i >= 6)  &&  ((j >= i - 5 && j <= 15 - i)) && ((j % 2 == 1 && i % 2 == 0) || ((j % 2 == 0 && i % 2 == 1)))))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
