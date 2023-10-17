#include <stdio.h>
int main()
{
    int a[][2] = {{5, 6}, {7, 8}};
    for (int i = 0; i < 2; i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < 2; j++)
        {
            sum1 = sum1 + a[i][j];
            printf("%d ", a[i][j]);

            sum2 = sum2 + a[j][i];
        }
        printf("%d\n", sum1);
        printf("%d\n", sum2);
    }
}