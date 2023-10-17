#include <stdio.h>
int main()
{
    int a[] = {5, 2, 3, 7, 6, 4, 9, 8};
    int no=5;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // sorted array
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int sub,cnt=0;
    //logic
    for (int i = 0; i < 8; i++)
    {
        for (int j= i+1; j < 8; j++)
        {
            sub=a[i]-a[j];
            if (sub==5)
            {
                printf("\n %d %d",a[i],a[j]);
                cnt++;
            }
            
        }
        
    }
    printf("\nNumber of Distinct pairs for difference 5 are %d ",cnt);
    
}