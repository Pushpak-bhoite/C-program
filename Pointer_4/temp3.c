#include<stdio.h>
int main(){
    int a[5],*ptr;
    printf("%d ",(a));
    printf("%d ",(a+(5)));

    for (int  i = 0; i < 5; i++)
    {
    printf("%d ",(&a[0]+(5)));
    }
    
    
}