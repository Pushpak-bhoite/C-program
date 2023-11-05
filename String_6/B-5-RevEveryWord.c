#include <stdio.h>
int main()
{
    char str[30] = {"Pratik looks good "};
    int start, end, flag = 1;

    for (int i = 0; str[i] != 0; i++)
    {
        if ((str[i] == " " || str[i] == "\0") && flag)
        {
            end = i;
            start = 0;
            flag = 0;
        }else
        if (str[i] == " " || str[i] == "\0")
        {
            end = i;
            start = end-start;
        }

        for (int j = start, k = end - 1; i < end; j++, k--)
        {
            int t = str[j];
            str[j] = str[k];
            str[k] = t;
        }
        start = i;
    }
}