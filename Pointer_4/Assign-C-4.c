// C program to sort even and odd elements of array separately using calloc
#include<stdio.h>
#include<stdlib.h>

int  main(){
    int *ptr,e=0,o=0,n,cnt1=2,cnt2=2;
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
            ev=(int*)realloc(ev,sizeof(int)*(e+1));
            ev[e]=ptr[i];
            e++;
        }else{
            od=(int*)realloc(od,sizeof(int)*(o+1));
             od[o]=ptr[i];
            o++;
        }
    }
            // ev=(int*)realloc(ev,sizeof(int)*e);
            // od=(int*)realloc(od,sizeof(int)*o);
  
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