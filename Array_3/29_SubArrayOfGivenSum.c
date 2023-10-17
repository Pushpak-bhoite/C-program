#include <stdio.h>
int main()
{
    int a[] = {3, 4, -7, 1, 3, 3, 1, -4};
    for (int i = 0; i < 8; i++)
    {
        int sum = 0;
        for (int j = i; j < 8; j++)
        {
            sum = sum + a[j];
            if (sum == 7)
            {
                for (int k = i; k <=  j; k++)
                {
                    printf("%d ", a[k]);
                }
                printf("\n");
            }
        }
    }
}