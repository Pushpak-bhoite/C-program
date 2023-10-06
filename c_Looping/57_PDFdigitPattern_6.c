#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
    int no=i;
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || j==1 || j==6-i)
            {
                printf("%d", no++);
            }
        else {
            no++;
            printf(" ");
        }
        }
    printf("\n");
    }

}
