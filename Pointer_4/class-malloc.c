//this is realloc function
#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,size,i;
printf("\n\n\n");
ptr=(int*)malloc(5);
printf("\nNow ptr points to %d",ptr);
printf("\nEnter No");
for (int i = 0; i < 5; i++)
{
    scanf("%d",&*(ptr+i));
}
for (int i = 0; i < 5; i++)
{
    printf("%d ",*(ptr+i));
}

ptr=(int*)realloc(ptr,5);
printf("\nNow ptr points to %d",ptr);
}