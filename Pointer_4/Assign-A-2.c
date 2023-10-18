// create and initialize array
#include<stdio.h>
int main(){
 int n1,n2;
 int *ptr1 = &n1;
 int *ptr2 = &n2;

 printf("Enter two values");
 scanf("%d%d",&n1,&n2);
 printf("\nptr1 = %d\n",*ptr1);
 printf("\nptr1 = %d\n",*ptr2);
 printf("%d+ =\n ",*ptr1+*ptr2);
 printf("%d- =\n ",*ptr1-*ptr2);
 printf("%d* =\n ",*ptr1 * *ptr2);

}