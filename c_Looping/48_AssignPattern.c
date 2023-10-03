#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the series
    int a = 1, b = 1, next ;
    for(int i=1 ;i<=4 ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%d ",b);
            next=a+b;
            a=b;
            b=next;

        }
        printf("\n");
    }

    
}
