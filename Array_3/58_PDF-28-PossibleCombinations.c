#include <stdio.h>
int main()
{
    int a[5] = {1, 5, 4, 6, 8};
    for (int i = 4; i >= 0; i-- )
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
                printf("%d ",a[j]);
        }
        printf("\n");
    }
}