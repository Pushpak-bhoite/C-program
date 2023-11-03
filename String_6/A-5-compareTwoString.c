// compare two strings
#include <string.h>
#include <stdio.h>

int main()
{
    char str1[50] = "india", str2[50] = "india";
    // printf("%d", strcmp(str1, str2));

    //  without using function
    for (int i = 0; str1[i] != 0; i++)
    {
        if (str1[i] - str2[i] == 0)
            printf("0");
        else if (str1[i] - str2[i] > 0)
            printf("2");
        else
        printf("-1");
    }
}