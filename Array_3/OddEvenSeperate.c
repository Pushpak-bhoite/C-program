#include <stdio.h>
int main()
{
    int a[5] = {25, 47, 42, 56, 32};
    int cnt = 0, b[5], c[5];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%d ", a[i]);
        }
    }
}