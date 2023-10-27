#include<stdio.h>
int main(){
    int a[11]={-4,8,-5,-6,5,-9,7,1,-21,-11,19};
    for (int i = 0; i < 11; i++)
    {
        for (int j = i+1; j < 11; j++)
        {
            if (a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d ",a[i]);
    }
    int b[11];
    int cnt=0;
for (int i = 0,j=10; i < 6; i++,j--)
{
    b[cnt]=a[i];
    cnt++;
    b[cnt]=a[j];
    cnt++;
}
printf("\n");
for (int i = 0; i < 11; i++)
    {
        printf("%d ",b[i]);
    }
    
    
}