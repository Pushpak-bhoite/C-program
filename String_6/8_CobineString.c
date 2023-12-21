// concatination of string 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void concat(char a[],char *b){  //both ways of declaration are enbled
    strcat(a,b);
    printf("\n%s",a);

}

int main(){
    char s1[50]="hare rama ";
    char s2[50]="Hare Krishna ";
    concat(s1,s2);
    // strcat(s1,s2);
    
    // printf("\n%d\n",s1);
    // printf("\n%d\n",s2);
    printf("\n%s\n",s1);
        
}