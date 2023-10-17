#include<stdio.h>
int main(){
    int a[]={1,3,6,21,4,9,12,3,16,10};
    int max;
    for (int i = 0; i < 10-3; i++)
    {
        max=0;
        for (int j = i; j < i+4; j++)
        {
            if(a[j]>max){
                max=a[j];
            }
            printf("%d ",a[j]);
        }
        printf("--->%d \n",max);
    }
    
}