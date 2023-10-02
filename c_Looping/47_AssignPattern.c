#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        int ch = 'A', a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d", a);
                a++;
            }
            else{
                printf("%c",ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
