#include <stdio.h>
int main()
{
    int no, i = 1, cnt = 0, rem, sum = 0, temp;
    printf("Enter No\t");
    scanf("%d", &no);
    temp = no;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        int p = 1, j = 1;
        while (j <= rem)
        {
            p = p * j;
            j++;
        }
        sum += p;
    }
    if (temp == sum)
    {
        printf("Strong ");
    }
    else
    {
        printf("Not Strong ");
    }
}
