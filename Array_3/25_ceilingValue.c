// App program 12.c
#include <stdio.h>
int main()

{
    int rng;
    printf("enter range of array ");
    scanf("%d", &rng);

    int a[rng];
    int no, f, c;
    printf("numbers");
    for (int i = 0; i < rng; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Ente no \t");
    scanf("%d", &no);
    for (int i = 0; i < 7; i++)
    {
        if (no == a[i])
        {
            f = a[i];
            c = a[i];
            break;
        }
        else if (no < a[0])
        {
            f = -1;
            c = a[i];
            break;
        }
        else if (i == 6)
        {
            f = a[i];
            c = -1;
            break;
        }

        else if (no > a[i] && no < a[i + 1])
        {
            f = a[i];
            c = a[i + 1];
            break;
        }
    }
    printf("ceiling :%d \nfloor : %d", c, f);
}