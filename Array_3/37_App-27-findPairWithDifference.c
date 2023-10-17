#include <stdio.h>
int main()
{
    int a[] = {1, 15, 39, 75, 92};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
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
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
//logic 
int sub;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            sub=a[i]-a[j];
            if (sub==53)
            {
                printf("\n\na=%d b=%d",a[i],a[j]);
            }
        }
    }
}