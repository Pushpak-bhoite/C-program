#include <stdio.h>
int main()
{
    int a[3][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i > j || i < j && a[i][j] == 0) || (i == j && a[i][j] == 1))
            {
                printf("%4d ", a[i][j]);
            }
            else
            {
                flag = 1;
            }
        }
        printf("\n");
    }
    if (flag)
    {
        printf("not");
    }
    else
    {
        printf("is i1dentity matrix");
    }
}