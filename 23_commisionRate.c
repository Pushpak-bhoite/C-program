#include<stdio.h>
int main(){
    int sales;
    printf("Enetr The sales");
    scanf("%d",&sales);

    sales>=0&&sales<5000 ? printf("Commision is 0 per") 
    :sales>=5000&&sales<10000 ? printf("Commision is 5 per") 
    :sales>=10000&&sales< 20000 ? printf("Commision is 10 per") 
    :sales>=20000&&sales< 30000 ? printf("Commision is 12 per") 
    : printf("Commision is 15 per") ;





    
}