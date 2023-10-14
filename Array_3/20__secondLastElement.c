//getting second largest element using deleting duplicate element
#include <stdio.h>
int main()
{
    int a[6] = {1, 2, 3, 4, 7, 7};
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
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    //Delete duplicate

    int cnt = 6, cnt1;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == a[i + 1])
        {
            cnt--;
            for (int j = i; j < cnt; j++)
            {
                a[j] = a[j + 1];
            }
        }
    }
    printf("\n");

    for (int i = 0; i < 6; i++)   ///6<6i
    {
        printf("%d ", a[i]);
    }
    printf(" \n%d",a[1]);
}