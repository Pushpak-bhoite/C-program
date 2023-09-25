#include<stdio.h>
int main(){
    int i=1,a=100 ,sum=0;
    while(a>=i){
        if((i%2)!=0){
            printf("%d ",i);
            sum=sum+i;
        }
        i++;
    }
            printf("\t sim is \t %d ",sum);

    return 0;
}