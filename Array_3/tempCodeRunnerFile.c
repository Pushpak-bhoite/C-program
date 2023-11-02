#include<stdio.h>
int * sort(int *a){
    int t=0;
    for(int i=0;i<5;i++){
        for(int j=(i+1);j<5;j++){

            if(a[i]<a[j]){

                t = a[i];
                    a[i]=a[j];
                    a[j]=t;
            }
        }
    }
    return a;
}
int main(){

    int  arr[]={1,23,44,55,66};
    printf("Before :");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    int *ptr = sort(arr);
    printf("\nAfter :");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}