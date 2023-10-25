#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(&a[i]));
        // a[i] = *(a+i) = i[a] = *(i+a) = *(&a[i])
    }
}