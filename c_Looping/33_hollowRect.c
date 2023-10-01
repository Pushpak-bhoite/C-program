#include <stdio.h>
int main()
{

    int i = 0, rows , cols ;
    printf("Enter rows And Cols");
    scanf("%d%d",&rows,&cols);
    for (int i = 1; i <= rows; i++)
    {
        printf("\n");

        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || j == 1 || j == cols || i == rows)
                printf(" * ");
            else
            {
                printf("   ");
            }
        }
    }
}