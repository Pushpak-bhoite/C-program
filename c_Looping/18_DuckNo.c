#include<stdio.h>
int main(){
    int rem,no=012034;
    while(no!=0){
        rem = no%10;
        no=no/10;
        if(rem==0){
            printf("Duck ");
            break;
        }
    }
    if(rem!=0){
    printf("Not Duck");
    }
}