#include<stdio.h>
int main(){
    int sum=0,no=123,rem;
    while(no!=0){
        rem=no%10;
        no=no/10;
        sum += rem;

    }
    printf("%d",sum);
}