// find smallest missing element from sorted array
#include <stdio.h>
int main()
{
    int a[8] = {0, 1, 3, 4, 5, 6, 7, 9};
    int flag=0;
    for (int i = 1; i < 8; i++)
    {
        for (int j = a[i]+1; j < a[i + 1]; j++)
        {
            printf("%d ",j);
            flag=1;
            break;
        }
        if (flag)
        {
            break;
        }
        
    }
}