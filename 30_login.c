#include<stdio.h>
int main(){
    char a;
    int c;

    printf("Enetr User name and paasword ");
    scanf("%c%d",&c,&a);

    if(a==1234 && c=='a'){
        printf("You are logged in ");
    }else{
        printf("Wrong Email and password ");

    }

}