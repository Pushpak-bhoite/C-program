#include <stdio.h>
int main()
{

    int n;
    printf("enter the range of array:");
    scanf("%d", &n);

    int a[n], i, temp, j;
    printf("Enter %d element of array:", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("sorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = a[i] + 1; j < a[i + 1]; j++)
        {
            printf("%4d", j);
        }
    }

    return 0;
}