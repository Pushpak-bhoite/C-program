// C to find the smallest missing element from a sorted array using calloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, size;
    printf("Enter size of Array\t");
    scanf("%d", &size);
    ptr = (int *)calloc(sizeof(int), size);
    printf("Enter No\t");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    // logic for missing element
    int x, y, z;
    for (int i = 0; i < size - 1 ; i++)
    {
        x = *(ptr+i)+1;   //ptr[i] + 1
        y = *(ptr+i+1) ;    //ptr[i + 1]
        for (int j = x; j < y; j++) //*(ptr+i+1)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    
}