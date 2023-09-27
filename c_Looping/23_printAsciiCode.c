// 20. Write a C program to print all ASCII character with their values
//1-127 numbers are denoted for ascii character
#include<stdio.h>
int main(){
    int i=1;
    while(i<=127){
         printf("\nchar %c ASCII %d",i,i);
       i++;
    }
}