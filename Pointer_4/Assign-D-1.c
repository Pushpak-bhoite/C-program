// C to find the smallest missing element from a sorted array using calloc
//Ive not written sorting logic so enter data in ascending order
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
    int x, y, z, flag = 0;
    for (int i = 0; i < size - 1; i++)
    {
        x = *(ptr + i) + 1;         // ptr[i] + 1
        y = *(ptr + i + 1);         // ptr[i + 1]
        for (int j = x; j < y; j++) //*(ptr+i+1)
        {
            printf("\nsmallest missing element--> %d ", j);
            flag = 1;
            break;
        }
        if (flag)
        {
            break;
        }
    }
}