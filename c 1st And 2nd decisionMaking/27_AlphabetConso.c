#include<stdio.h>
int main(){
    printf("Enetr the char :");
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        ch=ch+32;
    }

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("it is vovel");
    }else{
        printf("it is Consonent");
    }

    
}