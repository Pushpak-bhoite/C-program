#include<stdio.h>
int main(){
    char name;
    int year,curr=2023;
        printf("Enter Name :");
        scanf("%c",&name);

        printf("Enter year :");
        scanf("%d",&year);

        int age=curr-year;
    age>=18?printf("Eligible "):printf("Not Eligible ");

    return 0;
}