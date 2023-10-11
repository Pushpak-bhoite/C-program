#include<stdio.h>
int main(){
    int a[8]={8,7,6,5,4,3,2,1}; 
    for (int i = 0; i < 8 ; i++)
    {
        for (int j = i+1; j <8; j++)
        {
            if(a[i]>a[j]){
                int t = a[i];
                a[i]= a[j];
                a[j]= t;
            }
        }
        
    }
        
    printf("Sorted array will be like\n");
    for (int i = 0; i <  8; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}