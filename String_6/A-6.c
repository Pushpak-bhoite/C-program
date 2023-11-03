// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char str[] = "Hello, World!";
//     int i;

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         str[i] = toupper(str[i]);
//     }

//    printf("The string in uppercase is: %s", str);
//    return 0;
// }

// convert lower case to upper case
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50] = "INDIA";
    for (int i = 0; str[i] != 0; i++)
    {
        str[i]=tolower(str[i]);
    }

    printf("\n%s",str);

    for (int i = 0; str[i] != 0; i++)
    {
        str[i]=toupper(str[i]);
    }

    printf("\n%s",str);
    return 0;
}