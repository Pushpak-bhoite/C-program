#include<stdio.h>
int main(){

    float principle,rate,time;
    printf("Enter 1.principle 2.rate 3.time :\n ");
    scanf("%f%f%f",&principle,&rate,&time);

    // rate=100/rate;
    
    int interest = (principle*rate*time)/100;
    
printf("%f",interest);

    return 0;

}