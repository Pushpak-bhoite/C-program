#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr;
    int size;
    printf("enter the size of array:\t");
    scanf("%d", &size);
    arr = (int *)calloc(sizeof(int), size);
    printf("\nenter the elements into the array:\t");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            count++;
        }
    }
    int temp;
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            temp = *(arr + count);
            *(arr + count) = *(arr + i);
                *(ar*(arr + count) = *(arr+i); 
				*(arr + i) = temp;
					count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
