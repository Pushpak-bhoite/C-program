#include<stdio.h>
int main(){
    int no=6;
    for(int i=1 ; i<=no ;i++){
        for(int j=i ; j<=no ;j++){
            printf(" ");
        }
        for(int j=1 ;j<=i ;j++){
                if(j==1 || j==i ||i==no){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
        }
                    printf("\n");


    }
}