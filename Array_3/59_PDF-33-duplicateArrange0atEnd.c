#include <stdio.h>
int main()
{
    int a[10] = {0, 3, 3, 3, 0, 0, 7, 7, 0, 9};
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == a[i + 1])
        {
            a[i] = a[i] * 2;
            a[i + 1] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    int flag = 1;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i; j < 10; j++)
            {
                a[j] = a[j + 1];
            }
            a[9] = 0;
        }
        if (flag && i==9)
        {
            i=-1;
            flag=0;
        }
        
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}