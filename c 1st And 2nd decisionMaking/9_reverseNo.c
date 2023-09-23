#include<stdio.h>
int main(){
    printf("\n Enetr 3 digit No :");
    int no,rev=0,rem=0,que;
    scanf("%d",&no);
    rem = no%10; // rem=3
    rev=(rev*10)+rem;     //rev=3
    no = no/10;     //no=12

    rem = no%10; // rem=2
    rev=(rev*10)+rem;     //rev=30+2
    no = no/10;     //no=1

    rem = no%10; // rem=1
    rev=(rev*10)+rem;     //rev=30
    no = no/10;     //no = 0

    printf("%d",rev);


}