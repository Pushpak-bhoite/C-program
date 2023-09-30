#include <stdio.h>
int main()
{
    int a = 6, b = 11, no, i = 1;
    while (i)
    {
        i++;
        if (i % a == 0 && i % b == 0)
        {
            no = i;
            i = 0;
        }
    }
    printf("LCM = %d", no);
}