#include<stdio.h>
int main(){
    int a[5]={1,1,3,4,5};
    //check occurances
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1 ; j < 5 ; j++)
        {
            if(a[i]>a[j]){
                int t = a[i];
                a[i]=a[j];
                a[j]= t;

            }
        }
        
    }
//check occurances;
    int cnt=1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]==a[i+1])
        {
            cnt++;
        }else{
            printf("%d is present %d times\n",a[i],cnt);
            cnt=1;
        }
        
    }
    
    
}