// 2) Write a program in C to swap two numbers using function.

// 	Input 1st number : 2
// 	Input 2nd number : 4
// 		Expected Output :

// 		Before swapping: n1 = 2, n2 = 4                                                  
// 		After swapping: n1 = 4, n2 = 2
#include<stdio.h>
int main(){
    void swap(int ,int);
    int x,y;
    printf("enter two elements \t");
    scanf("%d%d",&x,&y);
    swap(x,y);
}
void swap(int a,int b){
    printf("y=%d  x=%d",b,a);
}