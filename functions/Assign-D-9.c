#include <stdio.h>
void evod(int[], int);
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i=5;
    evod(a, i);
}
int e=0,o=0;
int ev[0];
int od[0];
void evod(int *a, int i)
{
    if (i)
    {
        if (a[5-i]%2==0)
        {
                // printf("ev %d ",a[5-i]);
                ev[e]=a[5-i];
                e++;
        }else{
                // printf("odd %d ",a[5-i]);
                od[o]=a[5-i];
                o++;
        }
        evod(a,--i);
    }else{
        printf("\nEven");
        for (int j = 0; j < e; j++)
        {
                printf(" %d",ev[j]);
            
        }
        printf("\nOdd");
        for (int j = 0; j < o; j++)
        {
                printf(" %d",od[j]);
            
        }
        
    }
}