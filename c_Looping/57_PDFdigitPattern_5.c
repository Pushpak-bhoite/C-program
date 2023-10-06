#include<stdio.h>
int main(){
    int flag=1;
    
    for (int i = 1; i <= 5; i++)
    {      
         int no=1;
        for (int j = 1 ; j <= 5 ; j++)
        {
            if(j<=5-i){
                printf("-");
            }

            
        }
        for (int j = 1 ; j <= 5 ; j++)
        {
            if(j==1 ||  i==j ||i==5){
                    printf("%d ",j);
                }else{
                    printf("* ");
                }
                
        }
        printf("\n");
    }
    
}