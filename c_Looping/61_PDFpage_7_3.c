#include <stdio.h>
int main()
{
    int no = 1;
    for (int i = 1; i <= 4; i++)
    {
            int flag = 1;

        for (int j = 1; j <= 7; j++)
        {
            if (j <= i + 3 && j >= 5 - i)
            {
                if (flag)
                {
                    flag = 0;
                    printf("%d", no++);
                }
                else
                {
                    flag = 1;
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}