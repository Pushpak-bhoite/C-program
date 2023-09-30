#include<stdio.h>
int main(){
    int a=24 ,b=40,i=1,no,t;
    if(a>b){
    no=a;
    }else{
        no=b;
    }
    while (i<=no)
    {
        if(a%i==0 && b%i==0){
            t=i;
        }
        i++;
    }
    printf("HCF is : %d",t);
    
}