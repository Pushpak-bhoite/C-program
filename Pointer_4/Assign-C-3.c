//Write a C program to count total number of negative elements in an array using malloc
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,cnt=0,n;
    printf("Enter How Many No You want ");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    
    for (int i = 0; i < n; i++)
    {
        if (ptr[i]<0)
        {
            cnt++;
        }
    }
    printf("\nTotal no are %d\n",cnt);
    for (int i = 0; i < n; i++)
    {
            printf("%d ",ptr[i]);  //means *(ptr+i);
    }
        
}