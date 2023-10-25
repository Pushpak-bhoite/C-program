// reverse of an array using calloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, size;
    printf("Enter Size of array ");
    scanf("%d",&size);
    ptr = (int *)calloc(sizeof(int), size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int i = 0 ,j=size-1; i < size/2; i++,j--)
    {
        int t=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=t;
    }
     for (int i = 0; i < size; i++)
     {
        printf("%d ",*(ptr+i));
     }
     
}