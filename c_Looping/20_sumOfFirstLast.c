#include<stdio.h>
#include<math.h>

int main(){
    int no=12345 ,sum=0,first,last,cnt=0;
    int temp = no;
    while(no!=0){
        cnt++;
        no=no/10;
    }
    no = temp ;
    last =no%10;
    first=no/pow(10,--cnt);
    sum=first+last;
    printf("%d",sum);
}