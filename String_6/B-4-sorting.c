#include <stdio.h>
#include <string.h>
int main()
{
    char str[6];
    printf("Enter String ");
    gets(str);

    printf("\n%s ", str);
    int len = strlen(str);

    for (int i = 0; str[i] != 0; i++) // i < len
    {
        for (int j = i + 1; str[j] != 0; j++) // j< len
        {
            if (str[i] > str[j])
            {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }

    printf("\n%s ", str);
}