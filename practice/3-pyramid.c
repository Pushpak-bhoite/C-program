#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
                int k=i;    
        for (int j = 1; j <= 9; j++)
        {
            if(j>=6-i && j<=i+4){
                if(j<5)
                printf("%d",k++);
                else{
                    printf("%d",k--);
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}