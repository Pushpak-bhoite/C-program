// perfect
#include <stdio.h>
int main()
{
    int no = 6, i = 1, sum = 0;
    do
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
        i++;
    } while (i < no);

    if (no == sum)
    {
        printf("Perfect");
    }
    else
    {
        printf(" Not");
    }
}