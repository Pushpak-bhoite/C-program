#include <stdio.h>
int main()
{
    int a[] = {7, 9, 5, 11, 7, 4, 12, 6, 2, 11};
    int b = 7, c = 11;
    int least = 6, d, e;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if ((a[i] == 7 || a[j] == 7) &&  (a[i] == 11 || a[j] == 11))
            {
                if ((j - i) < least)
                {
                    least = j - i;
                    d = i;
                    e = j;
                }
            }
        }
    }
    printf("least = %d  d = %d  e = %d", least, d, e);
}