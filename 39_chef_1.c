#include<stdio.h>
int main(){
    int c1,c2;
    printf("Enter Cab charges c1 & c2 \t");
    scanf("%d%d",&c1,&c2);
    if(c1==c2){
        printf("Any");
    }else if(c1>c2){
        printf("cab c1");
    }else {
        printf("cab c2");
    }

}