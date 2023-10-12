#include <stdio.h>
int main()
{
    int a[5];
    int no,index;
    printf("Enter 5 numbers ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter index where you want to Insert ");
    scanf("%d",&index);
    printf("Enter No ");
    scanf("%d",&no);

        for (int i = 5; i > index; i--)
    {
        a[i]=a[i-1];
        
    }
    a[index]=no;

    for (int i = 0; i <= 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}