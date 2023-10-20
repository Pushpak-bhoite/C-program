#include<stdio.h>
int main()
{
   int a=100,*ptr;
   printf("\n%u",&a);
   printf("\n%u",ptr);
   printf("\n%u",&ptr);
   printf("\n%d",*ptr);
   printf("\n");

   ptr=&a;
   printf("\n%u",&a);
   printf("\n%u",ptr);
   printf("\n%u",&ptr);
   printf("\n%u",*ptr);

   printf("\n");

   ptr++;
   int b=200;
   *ptr=200;
    printf("\n1 %u",&b);
   printf("\n2 %u",ptr);
   printf("\n3 %u",&ptr);
   printf("\n4 %u",*ptr);
    
    return 0;
}


//  int n1,a[5]={1,2,3,4,5};
//         printf("\n %d --->%d",a,&a[0]);

//     int  *ptr=a;

//         printf("\n %d --->%d",*ptr, a);

//     for (int i = 0; i < 5; i++)
//     {
//         printf("\n %d --->%d",ptr,*ptr);
//         ptr++;
//     }