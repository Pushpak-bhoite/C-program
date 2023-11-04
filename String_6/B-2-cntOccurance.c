// Write a C program to count occurrences of a character in given string.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    char skey;
    printf("Enter strinf  ");
    gets(str1);
    printf("Enter the char ");
    scanf("%c",&skey);

    int cnt=0;
    for (int i = 0; str1[i] != 0; i++)
    {
        if(skey==str1[i])
        cnt++;
    }
    printf("\nOccurance =>%d",cnt);
}