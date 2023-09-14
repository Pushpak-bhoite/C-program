#include<stdio.h>
int main(){
    int add=0,no,rem;
    printf("Enter The no:" );
    scanf("%d",&no);
    
    rem=no%10;
    add=add+rem;
    no=no/10;

    rem=no%10;
    add=add+rem;
    no=no/10;
    
    rem=no%10;
    add=add+rem;
    no=no/10;

    printf("total : %d",add );

//with for loop

    for(int i=0;i<=no;i++){
        rem=no%10;
    add=add+rem;
    no=no/10;
    }
    printf("total : %d",add );
}