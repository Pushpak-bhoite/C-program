#include <stdio.h>
int main()
{
    int a = 12345, cnt = 0;
    while (a > 0)
    {
        a = a / 10;
        printf("%d\n ", a);

        cnt++;

    printf("\ncount :%d\t", cnt);

    }
    printf("\ntotal no :%d", cnt);
 
    return 0;
}