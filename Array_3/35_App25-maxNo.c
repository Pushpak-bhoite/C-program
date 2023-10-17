#include <stdio.h>
int main()
{
    int a[] = {1,3,3,5,3,4,1,7,7,7,7};;
    int no=5;
    for (int i = 0; i < 11; i++)
    {
        for (int j = i + 1; j < 11; j++)
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
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    //logic
    int cnt=1 ,max=1,b;
    for (int i = 0; i < 11 ; i++)
    {
        
    if (a[i]==a[i+1])
        {
            cnt++;
            if (cnt>max)
            {
                max=cnt;
                b=a[i];
            }
        }else{
            cnt=1;
        }
    }
    printf("\n no %d present  %d times",b,max);
}