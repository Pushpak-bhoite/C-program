#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if ((j >= 5 - i && j <= 8 - i) && ( (j == 5 - i || j == 8 - i) || (i==1 || i==4)))
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