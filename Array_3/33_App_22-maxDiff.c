#include <stdio.h>
int main()
{
    int a[] = {7, 9, 5, 6, 13, 2};
    // sorting
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    
    // sorted array
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    // main logic
    int sub = 0, max = a[0] - a[1];
    int b, c;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6 - 1; j++)
        {
            sub = a[i] - a[j];
            if (sub > max)
            {
                b = a[i];
                c = a[j];
                max = sub;
            }
        }
    }

    printf("max diff = %d, b= %d, c= %d", max, b, c);
}