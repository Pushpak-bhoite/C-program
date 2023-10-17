#include <stdio.h>
int main()
{
    int a[] = {1, 3, 3, 5, 4, 3, 2, 3, 3};
    int no = 3;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // Sorted array
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    // logic
    int cnt = 0,flag=1;
    for (int i = 0; i < 9; i++)
    {
        if (no == a[i])
        {
            cnt++;
            if(cnt==9/2){
                printf("\n %d appears more than  %d times",no,cnt);
                flag=0;
            }
        }
    }
    if (flag)
    {
    printf("\n sry ");

    }
    
}