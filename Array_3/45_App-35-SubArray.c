#include <stdio.h>
int main()
{
    int a[][2] = {{5, 6},
                  {7, 8}};
    int b[][2] = {{1, 2},
                  {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    
}