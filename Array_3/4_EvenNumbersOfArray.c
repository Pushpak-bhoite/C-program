#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    
    for (int i = 0; i <6; i++)
    {
        if(a[i]%2==0){
            printf(" %d",a[i]);
        }
    }
    
}