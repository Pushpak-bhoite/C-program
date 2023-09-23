// swsap 1st and last ,two no of  4 digit no;
#include<stdio.h>
int main(){
    int no ,swap,last,first,mid;
    printf("Enter The no:" );
    scanf("%d",&no);

    last=no%10;  //4
    no=no/10;   // no=123
    mid = no % 100;   //23
    first = no/100;    //1
    
           //4000   +  230    4
    swap=(last*1000)+(mid*10)+first;
    printf("Swapping is : %d",swap);
    return 0;
}