#include<stdio.h>
int main(){
    printf("Enetr the Sides of triangle :");
    int a,b,c ;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c&&b+c>=a&&c+a>=b){
        printf("It is triangle ");
    }else{
        printf("It is not ");

    }

}