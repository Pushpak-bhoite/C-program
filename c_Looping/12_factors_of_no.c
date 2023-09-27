#include<stdio.h>
int main(){
    int i=1,no=12;
    while(no>=i){
        if(no%i==0){
            printf("%d ",i);
        }
        i++;
    }
}