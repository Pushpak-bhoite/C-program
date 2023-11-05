// highest frequency character in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf(" Enter String ");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    char ch;
    int cnt = 1,max=0;
    printf("%s ", str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        {
            cnt++;
            if (cnt > max)
            {
                ch = str[i];
                max=cnt;
            }
        }else
        cnt=1;
    }
    printf("\n %c occures %d times", ch, max);
}