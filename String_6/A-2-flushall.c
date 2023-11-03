//we have used Flushall function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50] ;
    char str1[50] ;
    printf("Enter String 1");
    scanf("%s",&str);
    printf("Enter String 2");  
    _flushall();
    gets(str1);
    

    printf("%s ",str);
    printf("%s ",str1);
}