#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int flag = 1 ;

        for (int j = 1; j <= 17; j++)
        {
            if (j >= 10 - i && j <= 8 + i)
            {

                if (flag)
                {
                    flag = 0;
                    printf("%d",i);
                }
                else
                {
                    flag = 1;
                    printf("*");
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}