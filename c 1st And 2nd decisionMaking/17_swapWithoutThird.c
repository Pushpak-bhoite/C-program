#include<stdio.h>
int main(){
int a,b;
printf("Enter Two No :\n");
scanf("%d%d",&a,&b);
//suppose a=10 & b=12 ;
a=a+b; //22
b=a-b; //b=10
a=a-b;  //22-10=12
printf("swapped values are :\n A = %d \tB = %d",a,b);
return 0;
}


