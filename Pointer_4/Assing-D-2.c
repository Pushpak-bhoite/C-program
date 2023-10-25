// Write a program in C to count all distinct pairs for a specific difference using calloc
// suppose 5 2 3 7 6 4 9 8
// The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
// Number of distinct pairs for difference 5 are: 3
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, size, no;
    printf("Enter size of array");
    scanf("%d", &size);
    ptr = (int *)calloc(sizeof(int), no);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    
    //  for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", *(ptr + i));
    // }
    // main logic
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(ptr + j) - *(ptr + i) == 5 || *(ptr + j) - *(ptr + i) == -5)
            {
                printf("\n%d %d ", *(ptr + i), *(ptr + j));
            }
        }
    }

   
}