#include<stdio.h>
int getSort(int p[]){

    for(int i=0;i<5;i++){
      
        p[i]=p[i]+100;
    }
}
int main(){

    int arr[]={4,5,35,6,7};
    printf("Before Calling:");
    for(int  i=0;i<5;i++)
    {
        printf("\narray:%d ",arr[i]);
    }
    getSort(arr);
    printf("\nAfter Calling:");
    for(int  i=0;i<5;i++)
    {
        printf("\narray:%d ",arr[i]);
    }
    return 0;
}