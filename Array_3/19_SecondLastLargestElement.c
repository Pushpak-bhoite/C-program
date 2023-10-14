//getting second largest element using Counting method

#include <stdio.h>
int main()
{
    int a[6] = {1, 5, 3, 2, 5, 4};

    // Sorting Of Array
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

    // locating 2nd array
    int cnt = 1;
    for (int i = 0; i < 6; i++)
    {
        if (cnt == 3)       //we put this line 
        {
            printf("%d", a[i]);
        }
        if (a[i] != a[i + 1])
            cnt++;
    }
}