#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int  ev=0,od=0, b[ev], c[od];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[ev]=a[i];
            ev++;
        }else{
            
            c[od]=a[i];
            od++;
        }
    }
    for(int i=0;i<ev;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
     for(int i=0;i<od;i++)
    {
        printf("%d ",c[i]);
    }
    
}