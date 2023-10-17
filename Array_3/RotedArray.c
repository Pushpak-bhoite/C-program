#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5};
    //4 5 1 2 3;
    int index=3;
    int demo[5],count=0;
    for(int i=index;i<5;i++)
    {
        demo[count]=arr[i];
        count++;
    }
    for(int i=0;i<index;i++)
    {
        demo[count]=arr[i];
        count++;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",demo[i]);
    }

    return 0;
}