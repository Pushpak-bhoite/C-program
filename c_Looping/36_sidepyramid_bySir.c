#include<stdio.h>
int main(){
    int     no=10;
    for(int i=1 ;i<=9;i++){
        for(int j=1 ;j<=5 ;j++){
            if((i>=j && i<=5) || (j<=(10-i) && i>=6) ){
                printf("*");
            }
        }
        printf("\n");
    }
}