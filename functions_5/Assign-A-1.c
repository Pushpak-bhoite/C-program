// Write a program in C to find the square of any number using the function.Input : 20
// Expected Output :
// The square of 20 is : 400
#include <stdio.h>
int main()
{
    int sqr(int);
    int a;
    printf("Enter no ");
    scanf("%d", &a);
    int ans = sqr(a);
    printf("%d",ans);
}

int sqr(int a){
    return a*a;
}
