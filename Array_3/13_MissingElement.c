// Print Missing Elements
#include <stdio.h>
int main()
{
    int a[5] = {1, 5, 9, 13, 17};
    for (int i = 0; i < 5; i++)
    {
        for (int j = a[i]+1; j < a[i + 1]; j++)
        {
           // if (j > a[i] && j < a[i + 1])
                printf("%d ", j);
        }
    }
}