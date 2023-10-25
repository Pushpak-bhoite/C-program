#include <stdio.h>
int main()
{

    int n=6;
    // printf("enter the range of array:");
    // scanf("%d", &n);

    int  i, c, f, j, temp;
    int a[6]={1,3,5,7,8,9};
    // printf("Enter %d element of array:",n);
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    //	printf("\nenter the number:");
    //	scanf("%d",&no);

    printf("sorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    int no = 0;
    for (no = 0; no <= 10; no++)
    {
        for (i = 0; i < n; i++)
        {

            if (a[0] > no)
            {
                c = a[i];
                f = -1;
                break;
            }
            else if (a[n - 1] < no)
            {
                c = -1;
                f = a[n - 1];
                break;
            }
            else if (a[i] == no)
            {
                c = a[i];
                f = a[i];
            }
            else 
            {
                c = a[i + 1];
                f = a[i];
                break;
            }
            
        }
        printf("\nnumber:%d --ceiling=%d floar=%d", no, c, f);
    }

    return 0;
}