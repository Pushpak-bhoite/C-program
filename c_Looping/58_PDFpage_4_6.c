#include <stdio.h>
int main()
{
    int no=0;
    for (int i = 1; i <= 8; i++)
    {
        int flag = 1;

        for (int j = 1; j <= 7; j++)
        {
            if (i <= 4 && j >= 5 - i && j <= 3 + i)
            {
                if (flag)
                {
                    flag = 0;
                    no++;
                    printf("%d", no);
                }
                else
                {
                    flag = 1;
                    printf("*");
                }
            }
            if (i >= 5 && (j >= i - 4) && (j <= 12 - i))
            {
                if (flag)
                {
                    flag = 0;
                    printf("%d", j+6);
                }
                else
                {
                    flag = 1;
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}