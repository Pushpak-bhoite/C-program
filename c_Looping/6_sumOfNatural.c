#include<stdio.h>
int main(){
    int i=1,a=100 , sum=0;
    while(a>=i){
      sum = sum + i;
              i++;
    }
    printf("%d",sum);
    return 0;
}