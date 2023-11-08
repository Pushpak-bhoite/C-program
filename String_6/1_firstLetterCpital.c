#include <stdio.h>
int main()
{
    char ch[30] = {"   hare  ram      hello"};
    int i;
    for (i = -1; ch[i] != '\0'; i++)
    {
        if ((i == -1 || ch[i] == ' ') && (ch[i+1] != ' '))
        {
            ch[i + 1] = ch[i + 1] - 32;
        }
    }

    printf("%s", ch);
}
