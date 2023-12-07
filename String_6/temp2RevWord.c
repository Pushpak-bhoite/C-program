#include <stdio.h>
#include <string.h>

int main()
{
    char s[80] = {"     he     ram mere ram"};
    for (int i = 0; s[i] != 0; i++)
    {
        int start ;
            int end ;
        if ((i == 0 || s[i - 1] == ' ')&&s[i] != ' ')
        {
            start =i;
            for (int j = i; s[j] != ' ' &&  s[j]!= '\0' ; j++)
            {
                end = j;
            }
            for (int i = start, j = end; i < j; i++, j--)
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s",s);
}