//+ve And -ve number
#include <stdio.h>
void posNeg(int[], int);
int main()
{
    int size ;
    printf("Enter Array size \n");
    scanf("%d", &size);
    int a[size];
    printf("Enter Array  \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    posNeg(a,size);
}
int p=0,n=0,pos[0],neg[0];
void posNeg(int a[],int i){
    if (i)
    {
        if(a[5-i]>0){
            pos[p]=a[5-i];
            p++;
        }else{
            neg[n]=a[5-i];
            n++;
        }
        posNeg(a,--i);
    }else{

        printf("\npositive");
        for (int i = 0; i < p; i++)
        {
            printf(" %d",pos[i]);
        }
        printf("\nNegative");
        for (int i = 0; i < n; i++)
        {
            printf(" %d",neg[i]);
        }
        
    }
}