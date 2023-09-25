#include<stdio.h>
int main(){
    int a=10,i=1;
    int no;
    printf("Enter No");
    scanf("%d",&no);
    while(i<=a){
        printf("%d ",i);
        i++;
    }

        printf("\t");

    a=1,i=10; 
    while(a<=i){
        printf("%d ",i);
        i--;
    }
}