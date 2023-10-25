// delete duplicate element from array Using malloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, size;
    printf("Enter Size of array ");
    scanf("%d", &size);
    ptr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                int t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    printf("Sorted Array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
int x,y;
    for (int i = 0; i < size; i++)
    {
             x=*(ptr+i);
             y=*(ptr+i+1);
        if (*(ptr+i) == *(ptr+i+1))
        {
            size--;
            for (int j = i; j < size; j++)
            {

                ptr[j] = ptr[j+1]; //*(ptr + j) = *(ptr + j + 1);
            }
            i=i-1;
        }
    }

    printf("\nDeleted Array\n");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}