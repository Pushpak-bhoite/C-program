#include <stdio.h>
int main()
{
    int no = 6;
    for (int i = 1; i <= no; i++)
    {
        for (int j = no; j <= no; j++)
        {
            if (i == j)
            {
                printf("*");
            }else{
                printf("-");

            }
        }
        printf("\n");
    }
}