#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int no = 4;
    for (int i = 0; i < 4; i++)
    {
        int t = a[0];
        for (int j = 0; j < 8; j++)
        {
            a[j] = a[1 + j];
        }
            a[9 - 1] = t;
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
}
