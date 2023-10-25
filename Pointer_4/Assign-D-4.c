// Write a program in c to Move all zeroes to end of array using malloc
// The given array is : 2 5 7 0 4 0 7 -5 8 0
// The new array is:    2 5 7 8 4 -5 7 0 0 0
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, size;
    printf("Enter Size of array");
    scanf("%d", &size);
    ptr = (int *)calloc(sizeof(int), size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] ==0){
            for (int j = i; j < size-1; j++)
            {
                *(ptr+j)=*(ptr+j+1);//ptr[j]=ptr[j+1];
            }
            *(ptr+(size-1));//  ptr[size-1]=0;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
}