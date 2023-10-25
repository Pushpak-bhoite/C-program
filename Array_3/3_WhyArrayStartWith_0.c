// why array start with Zero(0)
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int *ptr;
    ptr=a;
    // when we want to print array from starting index ,then formulae is:
    int t;
    t= ptr*4;

    printf("\n 0 = %d  1 = %d 2 = %d 3 = %d 4 = %d ", &a[0], &a[1], &a[2], &a[3],&a[4]);
}