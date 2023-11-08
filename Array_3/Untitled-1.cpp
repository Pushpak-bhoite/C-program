#include<stdio.h>
int  main(){

    int arr[]={10,8,-20,5,-3,-5,10,-13,11};
    int sum=0;

    for(int i=0;i<9;i++)
    {
        sum=0;
        for(int j=(i+1);j<9;j++)
        {
            
            sum =arr[i]+arr[j];
            printf("\nsum  %d",sum);
        }
        printf("\n");
    }



    return 0;
}