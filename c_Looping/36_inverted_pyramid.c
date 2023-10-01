#include<stdio.h>
int main(){
    int no = 5;
    for(int i=1 ;i<no ; i++){
        for (int  j = 1; j<=i-1 ; j++)
        {
         printf("-");
        }
        for(int  j=1 ;j<=(no*2)-(i+i);j++)
         printf("%d",j);

         printf("\n");
         

    }
}