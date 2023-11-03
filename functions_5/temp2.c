#include<stdio.h>
  int getRev(int );
int main(){
    int a=123;
    // int ans=getRev(a);
    // return 0;
    printf("-->%d ",getRev(a));
}
int rem,sum=0;
int getRev(int no){//123
    if (no)
    {
        rem=no%10;
        no=no/10;//
        sum=sum*10+rem;

         getRev(no);
    }
       
     printf("Hello ");
         return sum;
}