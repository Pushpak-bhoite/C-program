// Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>

int main()
{
    char ch[50] = "I#$!A";
    int cnt = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        printf("%c", ch[i]);
        cnt++;
    }
    printf("\ncnt-->%d",cnt);
}
