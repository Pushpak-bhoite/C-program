#include<stdio.h>
int main(){
    // int c,b,a=5;
    // c=a++ < 5;
    // printf("a\t:%d \nc\t:%d",a,c);
    // ----------------------------------
    // int a=5,b;
    // b= a++ + a++ + ++a & 6;
    // printf("\na = %d\t b = %d\t",a,b);
    //--------------------------------------
    int a=10,b;
    b=a<10 +5 >>2+ a + a++ * ++a;
    printf("\na = %d\t b = %d\t",a,b);
}