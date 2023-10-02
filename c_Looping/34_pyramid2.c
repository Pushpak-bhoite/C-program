#include<stdio.h>
int main(){
    int no=5;
    for(int i=1 ;i<=no ;i++){
        for(int j=i; j<no ;j++){
            printf(" ");
        }
        for(int j=1 ; j<=i ;j++){
            printf("* ");
        }

                    printf("\n");

    }
}