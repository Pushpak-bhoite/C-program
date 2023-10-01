#include <stdio.h>
int main()
{   
    int t=5;
    for (int i = 5; i >= 1; i--)
    {
        printf("\n");
        for (int j = 1; j <= t; j++)
        {
            if (i <= j){
                printf("*");
            }
            else
                printf(" ");
        }
    }
}