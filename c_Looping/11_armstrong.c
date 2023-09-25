#include <stdio.h>
int main()
{
    int no = 153, cnt = 0, rem, sum = 0;
    int temp = no;
    while (no != 0)
    {
        no = no / 10;
        cnt++;
    }
    no = temp;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        int i = 1, p = 1;
        while (i <= cnt)
        {
            p = p * rem;
            i++;
        }

        sum = sum + p;
    }
    if (sum == temp)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
}