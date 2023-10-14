#include <stdio.h>
int main()
{
    int a[11] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int b[11];
    for (int i = 0; i < 11; i++)
    {
        if (i > 3)
        {
            b[i - 4] = a[i];
        }
        else
        {
            b[i + 7] = a[i];
        }
    }
    // printing of array
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", b[i]);
    }
}