#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    for (int i = 0 ,j=4 ; i < 2; i++,j--)
    {
        int t = a[i];
        a[i]=a[j];
        a[j]= t;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
    
}