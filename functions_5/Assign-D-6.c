#include <stdio.h>
void show(int[], int);
int main()
{
    int i = 5;
    int a[5] = {1, 2, 3, 4, 5};
    show(a, i);
}
void show(int a[], int i)
{
    // printf("\n%d ",i);
    if (i)
    {
        printf("%d ", a[5-i]);
        i--;
        show(a, i);
    }
}