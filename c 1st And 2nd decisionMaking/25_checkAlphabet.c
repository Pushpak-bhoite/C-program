#include<stdio.h>
int main(){
    printf("Enetr the char :");
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
    printf("It is Aplphabet");
    }else{
    printf("Not an Alphabet");
    }

    
}