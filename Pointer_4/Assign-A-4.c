#include <stdio.h>
int main()
{
    int n1, n2, temp;
    int *ptr1 = &n1;
    int *ptr2 = &n2;
    printf("Enter two values ");
    scanf("%d%d",&n1,&n2);

    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("ptr1=%d",*ptr1);
    printf("\nptr2=%d",*ptr2);
}