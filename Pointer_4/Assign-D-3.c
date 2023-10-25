//  find the maximum repeating number in a given array. using malloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, max = 1, size, a;
    printf("Enter size \t");
    scanf("%d", &size);
    ptr = (int *)calloc(sizeof(int), size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    // Sorting
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int t = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = t;
            }
        }
    }
    printf("Sorted Array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }

    int cnt = 1, x, y;
    for (int i = 0; i < size; i++)
    {
        x = *(ptr + i);     // ptr[i]
        y = *(ptr + i + 1); // ptr[i+1]
        if (x == y)
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
                a = ptr[i];
            }
        }
        else
        {
            cnt = 1;
        }
    }

    printf("\nmax= %d no=%d ", max, a);
}