// this program is only for 1-10 or any continuous elemets
#include <stdio.h>
int main()
{
    int n;

    int a[] = {1, 3, 5, 7, 8, 9};
    int no, f, c;

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (i == a[j])
            {
                f = a[j];
                c = a[j];
                // break;
            }
            else if (i < a[0])
            {
                f = -1;
                c = a[0];
                // break;
            }
            else if (i > a[j] && i < a[j + 1])
            {
                f = a[j];
                c = a[j + 1];
                // break;
            }
            else if (i > a[5])
            {
                f = a[5];
                c = -1;
                // break;
            }
        }
                printf("Number %d ceiling is: %d floor is : %d\n", i, c, f);

    }
}