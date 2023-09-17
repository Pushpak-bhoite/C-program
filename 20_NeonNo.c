#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter The Number \t");
    int org,no,p,temp,rem,sum,b;
    scanf("%d",&no);
    temp = no;
    // suppose no=9;
    b=pow(no,2);
    rem=b%10;//1
    b=b/10;  //8
    
    rem=rem+b;
    rem==temp?printf("Yes Neon Number"):printf("NOtNeon Number");

    // first=no%10;
    // no=no/10;
    // rem=no%10;
    // sum=first+last;
    // sum==temp?printf("Yes Neon Number"):printf("NOtNeon Number");
    return 0;
    }