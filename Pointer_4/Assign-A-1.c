// create and initialize array
#include<stdio.h>
int main(){
 int a=100;
 int *ptr ;
 ptr =&a;
 printf("%d\n ",a);
 printf("%d\n",*ptr);
 printf("%u\n",ptr);
 printf("%u\n",&a);

}