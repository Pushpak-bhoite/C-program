#include <stdio.h>
int main()
{
    void maxmin(int[], int);
    int i = 5;
    int a[5] = {5,1,3,6,2};
    maxmin(a, i);
}
int s = 0, cnt = 0,max=0,min=5;
void maxmin(int a[], int i)
{
    if (i)
    {
        if(a[5-i]>max)
        max=a[5-i];
        if (a[5-i]<min)
        min=a[5-i];
        maxmin(a, --i);
    }
    else
    {
        printf("\n max = %d ", max);
        printf("\n min = %d ", min);
    }
}