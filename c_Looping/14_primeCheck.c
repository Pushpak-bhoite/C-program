#include<stdio.h>
int main(){
    int i=2,no=13;
    int  flag=1;
    while(no>i){
        if(no%i==0){
            printf("No");
            flag = 0;
            break;
        }

        i++;
    }
    if(flag){
            printf("Yes");

    }

}