#include <stdio.h>
int main()
{
    int a[5] ;
    int *ptr;
    ptr=a;

    printf("Enter Values ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("\n reversed array \n");
    for (int i = 0,j=4; i < 2; i++,j--)
    {
        int t= *(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=t;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}