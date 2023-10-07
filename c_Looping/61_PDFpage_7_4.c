#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int flag = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                if (flag)
                {
                    flag = 0;
                    printf("0");
                }
                else
                {
                    flag = 1;
                    printf("1");
                }
            }
            else
            {
                printf("-");
            }
        }

         lag = 1;

        for (int j = 5; j >= 1; j--)
        {
             if (j <= i)
            {
                if (flag)
                {
                    flag = 0;
                    printf("0");
                }
                else
                {
                    flag = 1;
                    printf("1");
                }
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}