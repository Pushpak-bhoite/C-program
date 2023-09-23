//this is for 5 digit no ;
#include<stdio.h>
int main(){
    int no,rem,rev;;
    printf("Enter The no :");
    scanf("%d",&no);
    int orignl=no;
        // 121
     rem=no%10;
     rev=rev*10+rem;
     no=no/10;

    rem=no%10;
    rev=rev*10+rem;
    no=no/10;

    rem=no%10;
    rev=rev*10+rem;
    no=no/10;

    orignl==rev ? printf(" Palindrome no ") : printf("Sorry Not Palindrome") ;

    // int first = no/10000; //    1st no
    // int sec = (no/1000)%10;  // 2nd no
    // int third = (no/100)%10 ;   //3rd no
    // int forth  = (no/10)%10;    // 4 rth no
    // int last = no % 10 ;    //5 th
    // first==last && sec==forth ? printf(" Palindrome no ") : printf("Sorry Not Palindrome") ;
}