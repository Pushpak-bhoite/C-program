#include<stdio.h>
int main(){
    int i=1,a=100;
    while(a>=i){
        if((i%2!=0)){
            printf("%d ",i);
        }

        i++;
    }
    return 0;
}