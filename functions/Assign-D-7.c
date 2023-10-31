#include <stdio.h>
int main()
{
    void sum(int[], int);
    int i = 5;
    int a[5] = {1, 2, 3, 4, 5};
    sum(a, i);
}
int s = 0, cnt = 0;
void sum(int a[], int i)
{
    if (i)
    {
        s = s + a[5 - i];
        sum(a, --i);
    }
    else
    {
        printf("\nsum = %d %d", s, cnt++);
    }
}