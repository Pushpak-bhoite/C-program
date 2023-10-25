//collect zeroes at the end
#include <stdio.h>
int main()
{
  int cnt = 0;   
  //           0  1  2  3  4  5  6   7  8  9
    int a[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0 && i < 10 - ++cnt)
        {
            for (int j = i; j < 10 - cnt; j++)
            {
                a[j] = a[j + 1];
            }
            a[10 - cnt] = 0;
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
}
