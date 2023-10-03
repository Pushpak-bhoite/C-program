#include<stdio.h>
int main(){
    int no=10;
    for (int  i = 1; i <= no; i++)
    {
        if(i<=no/2){
        for(int j=1 ;j<=i ;j++){
            printf("*");
        }}
        
        if(i>no/2){
        for (int j = i; j < no; j++)
        {
            printf("*");
        }
        }//if
        
        printf("\n");
    }
    
}