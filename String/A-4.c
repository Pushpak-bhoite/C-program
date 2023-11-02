#include <string.h>
#include <stdio.h>
int main()
{
    char str[50] = "hi india";
    char str1[50] = "Bharat ";
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     str1[i] = str[i];
    // }


    strcat(str1, str);
    printf("*%s ", str1);
}