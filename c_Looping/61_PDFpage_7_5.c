#include <stdio.h>
int main()
{
    int flag = 1;
    for (int i = 1; i <= 5; i++)
    {
    int no = 1;

        for (int j = 1; j <= 10; j++)
        {
            if (j > i && j < 11 - i)
            {
                printf("-");
            }
            else
            {
                if (( j<=5 ))
                {
                printf("%d",no++);
                }
                else
                {
                    
                printf("%d",--no);
                     
                }
                
            }
        }
        printf("\n");
    }
}