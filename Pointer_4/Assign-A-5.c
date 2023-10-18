#include<stdio.h>
int main()
{
    int n1,a[5]={1,2,3,4,5};
        printf("\n %d --->%d",a,&a[0]);

    int  *ptr;
    *ptr=a;

        printf("\n %d --->%d",*ptr, a);

    for (int i = 0; i < 5; i++)
    {
        printf("\n %d --->%d",ptr,*ptr);
        ptr++;
    }
    
    return 0;
}
