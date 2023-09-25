#include<stdio.h>
int main(){
    int i=1,a=100,sum=0;
    while(a>=i){
        if(!(i%2)){
            printf("%d ",i);
            sum=sum+i;
        }
        i++;
    }
    printf("\n sum is \t%d",sum);
    return 0;
}