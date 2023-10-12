#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[3]={6,7,8};
    int c[13];
    for (int i = 0; i < 8; i++)
    {
        if(i<5){
            c[i]=a[i];
        }else{
            c[i]=b[i-5];
        }
    }
    for (int  i = 0; i < 8; i++)
    {
        printf("%d ",c[i]);
    }
    
    
}