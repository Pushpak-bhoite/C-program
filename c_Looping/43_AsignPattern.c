#include <stdio.h>
int main()
{
    // int no=5;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j < i+5 ; j++)
        {
                printf(" %c",j);
        }
        printf("\n");
    }
}