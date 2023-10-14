// App program 10
// majority no is no which has duplicates counts grater than half of the array
#include <stdio.h>
int main()
{
    int a[10] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2};

    // sort the array in Ascending / descenting

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        // printf sorted array
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    // find majority element
    int cnt = 1,flag=1;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == a[i + 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > 5)
            {
                printf("\n %d is majority element");
                flag=0;
                break;
            }
            else
            {
                cnt = 1;
            }
        }
    }
    if (flag)
    {
        printf("\nNo majority element");
    }
    
}