#include <stdio.h>
int main()
{
    char s1[50]; //="h11b150";
    printf("\n Enter String ");
    gets(s1);
    int sum = 0;
    for (int i = 0; s1[i] != 0; i++)
    {
        int no = 0;
        if (s1[i] >= '0' && s1[i] <= '9')
        {
            int j;
            for (j = i; s1[j] >= '0' && s1[j] <= '9'; j++)
            {
                s1[j] = s1[j] - 48;
                no = no * 10 + s1[j];
            }
            i = j;
        }
        sum = sum + no;
    }
    printf("%4d", sum);
}