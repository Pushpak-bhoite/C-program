#include<stdio.h>
int main(){
    int rows=5;
    for(int i=1 ;i<=rows ; i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==rows ){
                printf("*");
            }else{
                printf(" ");
            }
        }
    }
}