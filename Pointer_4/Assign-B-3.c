#include<stdio.h>
int main(){
    int a[5], *ptr,b[5];
    ptr=a;
    printf("Enter numbers\n");
    for (int i = 0; i < 5 ; i++)
    {
        scanf("%d",&*(ptr+i));
        b[i]=a[i];
    }
printf("this is array b  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
    
    
}