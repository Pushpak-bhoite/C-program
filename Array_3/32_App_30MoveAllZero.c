#include <stdio.h>
int main()
{//            0  1  2  3  4  5  6   7  8  9                           
    int a[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
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
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}