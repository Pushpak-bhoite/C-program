#include <stdio.h>
int main()
{
    int a[][2] = {{1, 2},
                  {3, 4}};
    int b[][2] = {{5, 6},
                  {7, 8}};
    int c[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        int sum=0;
            for (int k = 0; k < 2; k++)
            {
                sum=sum+ a[i][k] * b[k][j];
            }
            printf("%4d ",c[i][j]=sum);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}
