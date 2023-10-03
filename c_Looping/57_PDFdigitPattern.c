#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {       int no=1;
        for (int j = 1 ; j <= 9 ; j++)
        {
            if(j==6-i || j==4+i || i==5){
            printf("%d",no) ;   
            
            
            no++;

            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}