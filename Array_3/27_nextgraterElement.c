// app program 15 
#include<stdio.h>
int main(){
    int a[]={5,3,10,9,6,13};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if(a[j]>a[i]){
            printf("Next bigger of %d is %d \n",a[i],a[j]);
            break;
            }
            if (i==5)
            {
             printf("Next bigger of %d is %d \n",a[i],-1);
            }
            
            
        }
        
    }
    
}