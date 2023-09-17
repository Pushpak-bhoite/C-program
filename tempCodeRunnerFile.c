//this is for 5 digit no ;
#include<stdio.h>
#include<math.h>
int main(){
    int no ;
    printf("Enter The no :");
    scanf("%d",&no);
    int orgnl=no;
    int n,rem,temp,p,sum=0;
    // suppose no=153
    rem = no%10;
    p=pow(rem,3) ;   
    sum=sum+p;
    no=no/10;

    rem = no%10;
    p=pow(rem,3) ;   
    printf("Power of five \t%d",p);

    sum=sum+p;
    no=no/10;

    rem = no%10;
    p=pow(rem,3) ;   
    sum=sum+p;
    no=no/10;

    printf(" \n%d\t%d",orgnl,sum);

    sum==orgnl?printf(" Yes Armstrong No") :printf("Not an Armstrong No") ;





//if No = 153;
    // int first = no/100 ;
    // int sec = (no/10)%10;
    // int third = no%10;
    // int a=first*first*first;
    // int b=sec*sec*sec;
    // int c=third*third*third;
    // int sum=a+b+c;
    // int x=pow(sec,2);

    // sum==no?printf(" Yes Armstrong No") :printf("Not an Armstrong No") ;
   return 0;
}
