#include<stdio.h>
int main(){
    int flag = 1;
    for(int i= 1; i<=6 ;i++ ){
        for (int j = 1; j <= 11; j++)
        {
            if((j>=i && j<= 12-i ) && flag){
                flag = 0;
                printf("*");
            }else{
                flag=1;
                printf(" ");
            }
        }
        printf("\n");
    }
}

  