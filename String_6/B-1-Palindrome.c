// Write a C program Enter the String to check whether a String is palindrome or not using function and return it.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[7] = {"ABCBA"};
    // reverse string
    char temp[7];
    strcpy(temp, str);
    // printf("%s",temp);
    int len = strlen(str);

    for (int i = 0, j = len - 1; i < (len / 2); i++, j--)
    {
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
    }
    printf("\n%s", str);
    printf("\n%s", temp);
    printf("\n%c", strcmp(str, temp));

    if (strcmp(str, temp))
        printf("\nNot");
    else
        printf("\nPalindrome");
}