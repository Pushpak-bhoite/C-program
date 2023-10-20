#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr, flag = 1, no = 3;
    ptr = a;
    for (int i = 0; i < 5; i++)
    {
        if (no == *ptr)
        {
            printf("found");
            flag=0;
            break;
        }
        ptr++;
    }
    if (flag)
    {
        printf("Not found");
    }
    
}