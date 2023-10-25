#include <stdio.h>
int main()
{

    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    printf(" Display Array values\n");
    int *ptr;
    ptr=&a[0][0];
    int **ptr1;
    ptr1=&ptr;
    **ptr1=200;
    *(*(ptr1+0)+1)=500;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",*(*(a+i)+j)); //a[i][j]
        }
        
    }
    
    return 0;
}