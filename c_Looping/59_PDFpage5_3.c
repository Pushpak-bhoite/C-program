#include<stdio.h> 
int main(){
    for (int  i = 1; i <= 10 ; i++)
    {
        for (int  j = 1; j <= 10; j++)
        {
            if((i<=5 && j>i && j<11-i) || (i>=6 && j>11-i && j<i)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    
}