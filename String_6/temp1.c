// pratiksha's code
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = {"hare ram  "};

    for (int i = 0; i < strlen(str); i++)
    {
        if ((i == 0 || str[i - 1] == ' ' ) && str[i]!=' ')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}