#include<stdio.h>
int main(){
    int flag=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if(j>=i && j<=  10-i && flag){
                printf("*");
                flag=0;
            }else{
                printf(" ");
                flag=1;
            }
        }
            printf("\n");
        
    }
    
}