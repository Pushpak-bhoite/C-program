#include<stdio.h>
int main(){
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if(j<=5+i && j>=5-i){
                if(5==j){
                printf("%d",i);
                }else{
                    printf("*");
                }
            }else{          
                printf(" ");
            }
        }
        printf("\n");
    }
    
}