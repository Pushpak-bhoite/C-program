#include<stdio.h>
int main(){
    int a=0,b=1,t,i;
    while (i<=10)
    {
        printf(" %d",a);
        t=a+b;
        a=b;
        b=t;
    i++;
    }
    
}