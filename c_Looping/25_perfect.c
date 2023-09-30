#include<stdio.h>
int main(){
    int no=6,i=1,sum=0;
    while(i<no){
        if(no%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(no==sum){
        printf("Yes");
    }else{
        printf("No");

    }
}