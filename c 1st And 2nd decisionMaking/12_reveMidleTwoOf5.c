// swap 1st and last ,two no of  4 digit no ;
#include<stdio.h>
int main(){
    int no,swap,last,secLast,thirdLast;
    printf("Eneter The No :\t");
    scanf("%d",&no);
    last = no%10 ; //5
    no = no/10 ; //1234
    secLast = no%10;  //4
    no = no/10; //123
    thirdLast = no%10;
    no = no/10; // 12
    //      12000 +    400      +   30
    swap= no*1000 + secLast*100 + thirdLast*10 +last ; 
    printf("%d",swap);
        return 0;
}