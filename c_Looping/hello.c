#include <stdio.h>
/*
    0         0
    01       01
    010     010
    0101
    01010

*/
int main()
{
    int i, j, flag = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j <= i || j + i >= 11)
            {
                if (j <= 5 && j % 2)
                {
                    printf("%d", 0);
                }
                else if (j > 5 && flag)
                {
                    printf("%d", 0);
                    flag = 0;
                }
                else
                {
                    printf("%d", 1);
                    flag = 1;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}