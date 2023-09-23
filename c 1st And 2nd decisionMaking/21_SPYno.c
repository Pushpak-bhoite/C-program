#include<stdio.h>
int main(){
    int first,sec,no,third,forth,temp;
    int rem,a,sum=0,prdct=1;
    printf("Enetr The No \n");
    scanf("%d",&no);
    // suppose no= 1124
    rem = no%10;//4
    no=no/10; //112
    sum=sum+rem;
    prdct=prdct*rem;

    rem = no%10;//2
    no=no/10; //11
    sum=sum+rem;
    prdct=prdct*rem;

    rem = no%10;//1
    no=no/10; //1
    sum=sum+rem;
    prdct=prdct*rem;

    rem = no%10;//1
    no=no/10; //  0
    sum=sum+rem;    //
    prdct=prdct*rem;
    sum==prdct ? printf("Yes Its SPY NO"):printf("Not an SPY NO");

    
    
    // suppose no= 1124
    // forth=no%10;    //4
    // no=no/10;       //112
    // third=no%10;    //2  
    // no=no/10;       //11
    // sec=no%10;      //1
    // first=no/10;    //1
    // int sum=first+sec+third+forth;
    // int prduct = first*sec*third*forth;

    // sum==prduct?printf("Yes Its SPY NO"):printf("Not Its an SPY NO");
        
    return 0;
}