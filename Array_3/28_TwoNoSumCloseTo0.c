#include <stdio.h>
int main()
{
    int a[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // sorted array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    // logic
    int min = a[0] + a[10 - 1], sum, c, b;
    for (int i = 1; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            sum = a[i] + a[j];
            if (sum < min && (sum < 0 || sum >0))
            {
                min = sum;
                b = a[i];
                c = a[j];
            }
        }
    }
    printf(" \n min = %d b = %d c = %d", min,b,c);
}