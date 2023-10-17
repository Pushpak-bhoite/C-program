#include <stdio.h>
int main()
{
    int a[11] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int b[11];
    int no,cnt=0;
    printf("Enter number from where you want to rotate number \n");
    scanf("%d",&no);
    for (int i = 0; i < 11; i++)
    {
        if (i > no-1){  //4>3
          //5
            printf("%d ",a[i]);
            b[i-no]=a[i];
            cnt++;
        }
        
    }
    for (int i = 0; i < 11; i++) 
    {
        if (i < no){   //0<4
            printf("%d ",a[i]);
            b[cnt+i]=a[i];
        }
    }               

    // printing of array
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", b[i]);
    }
}