#include<stdio.h>
int main(){
    printf("Enter two angles \n");
    float a,b,c,t;
    scanf("%f%f",&a,&b);
    t = 180-(a+b);
    printf("third angle will be :%f", t);
    return 0;
    }