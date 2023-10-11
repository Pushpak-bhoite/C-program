#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int no;
    printf("Enter no which you want to delete ");
    scanf("%d", &no);
    int cnt = 5;

    for (int i = 0; i < cnt; i++)
    {
        if (no == a[i])
        {  cnt--;
             for (int j = i; j < 5; j++)
                    {
                        a[j] = a[j + 1];
                    }
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", a[i]);
    }
}