#include<stdio.h>
int main(){
    int flag=1;
    
    for (int i = 1; i <= 5; i++)
    {      
         int no=1;
        for (int j = 1 ; j <= 9 ; j++)
        {
            if(j==6-i || j==4+i || i==5 && flag){
            printf("%d",no) ;   
            
            no++;
            flag=0;
            }else{
                printf(" ");
                flag=1;
            }
            
        }
        printf("\n");
    }
    
}