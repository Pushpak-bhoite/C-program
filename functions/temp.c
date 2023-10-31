#include <stdio.h>
int j = 0, max = 0, min = 5;
// void minmax(int [], int);
void minmax(int *a,int i)
{
    if (i)
    {
        if (a[5-i] > a[(5-i) + 1])
        {
            max = a[5-i];
        }
        if (a[i] < a[(5-i) + 1])
        {
                min = a[5-i];
        }
        minmax(a, --i);
    }else{
        printf("max = %d min = %d",max,min);
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int k=5;
    minmax(a,k);
}
