//use of realloc using simple numbers;
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in, en,no, *ptr; // in-initial no ,extra no
    printf("enter size of array \n");
    scanf("%d", &in);
    ptr = (int *)malloc(sizeof(int) * in);
    for (int i = 0; i < in; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Enter Extra size \n");
    scanf("%d", &en);
    ptr = (int *)realloc(ptr, sizeof(int) * en);
    for (int i = in; i < in + en; i++)
    {
        scanf("%d", (ptr + i));
    }


    for (int i = 0; i < in + en; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
