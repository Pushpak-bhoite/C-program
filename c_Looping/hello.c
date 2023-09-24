#include <stdio.h>
int main()
{
    int no = 6, i = 1, per=0;
    while (i < no)
    {
        if (no % i == 0)
        {
            per = per + i;
            printf("%d",i);
        }
        i++;
    }
    if (per == no)
    {
        printf("\nYES");
    }
    else
    {
        printf("\n\nNO");
    }
    return 0; 
}