#include<stdio.h>
int main(){
    int a[]={10,8,-20,5,-3,-5,10,-13,11};
    int sum=0;
    for (int  i = 0; i < 9; i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
}