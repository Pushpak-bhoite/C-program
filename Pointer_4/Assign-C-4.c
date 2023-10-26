// C program to sort even and odd elements of array separately using calloc
#include<stdio.h>
#include<stdlib.h>

int  main(){
    int *ptr,e=0,o=0,n;
    int *ev,*od;
    ev=(int*)malloc(sizeof(int)*1);
    od=(int*)malloc(sizeof(int)*1);
    printf("Enter How many No you want ");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (ptr[i]%2==0)
        {
            e++;
            ev=(int*)realloc(ev,sizeof(int)*e);
            *(ev+e)=ptr[i];
            // printf("\n %d %d ",*ev,ptr[i]);
        }else{
            o++;
            od=(int*)realloc(od,sizeof(int)*o);
             *(od+o)=ptr[i];
        }
    }
    printf("\nEven\n");
    for (int i = 0; i<e; i++)
    {
        printf("%d ",ev[i]);
    }
    printf("\nOdd\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ",od[i]);
    }
}