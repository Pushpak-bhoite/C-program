#include<stdio.h>
int main(){
    for (int i = 1; i <= 7 ; i++)
    {   
        for (int j = 1; j <= 4; j++)
        {
            if((i<=4)&&(j<=i)){
                    printf("%d",i+2);
            }
            if(((i>=5) && (j<= 8-i))){
                printf("%d",10-i);
            }
        }
        printf("\n");
        
    }
    
}