#include<stdio.h>
int main(){
    int no=9,rem,sum=0;
    int temp=no;
    no=no*no;
    while(no!=0){
        rem=no%10;
        no=no/10;
        sum=sum+rem;    
    }
    if(sum==temp){
        printf("neon ");
    }else{
        printf("No ");

    }
}