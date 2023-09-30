#include<stdio.h>
int main(){
    int no=100,i=2 ,sum=0;
    while(i<no){
        int j=2,flag=1;
        while(j<i){     //5<5
            if(i%j==0){
                flag=0;
                break;
            }
            
            j++;
        }
        if(flag ){
             sum =sum+i;
        printf("%d ",i);
        }
        i++;
    }
        printf("sum :%d ",sum);



}