#include<stdio.h>
int main(){
    int curr ,final;
    printf("Enter The Iitial & final ");
    scanf("%d%d",&curr,&final);
    if(curr > final){
        curr=curr-final;
        printf("you need to press %d",curr);

    }else if (final > curr)
    {   
        final=final-curr;
        printf("you need to press %d",final);

    }
    
}