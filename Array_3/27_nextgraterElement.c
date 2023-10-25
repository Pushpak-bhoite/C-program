// app program 15 
#include<stdio.h>
int main(){
    int a[]={5,3,10,9,6,13},flag=0;
    int x,next,i,j;
    for (i = 0; i < 6; i++)
    {
        for ( j = i; j < 6; j++)
        {
            if(a[j]>a[i]){
                x=a[i];
                next=a[j];
                flag=1;
            break;
            }else{
                flag=0;
            }
        }
        if(flag){
            printf("Next bigger of %d is %d \n",a[i],a[j]);
        }else{
             printf("Next bigger of %d is %d \n",a[i],-1);
        }
    }
    
}