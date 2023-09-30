#include <stdio.h>
int main()
{
    int rows = 10, cols = 10;
    for (int i = rows; i >= 1 ; i--)
    {
        printf("\n");
        for (int j = i; j >= 1 ; j--)
        {
            if (i == rows || j==i || j == 1)
            {
                printf("* ");
            }else{
                printf("  ");
            }
        }
    }
}