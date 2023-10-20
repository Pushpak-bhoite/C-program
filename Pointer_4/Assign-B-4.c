#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr,no;
    ptr = a;
    printf("\nEnter numbers \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &*(ptr + i));
    }
    printf("\nEnter rotate index\n");
    scanf("%d",&no);
    for (int i = 0; i < no ; i++)
    {
        int t = *(ptr);
        for (int j = 0; j < 4 ; j++)
        {
            *(ptr+j)=*(ptr+j+1);
        }
        *(ptr+4)=t;

    }

printf("\nRotated Array");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d",*(ptr+i));
    }
    
}