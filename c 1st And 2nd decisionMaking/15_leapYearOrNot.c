//1900 is not leap year so (year%100!=0 )
//but  year 2000 is leap year so   (year%400==0)

#include<stdio.h>
int main(){
int year;
printf("Enter The No :\t");
scanf("%d",&year);
//                  yreay
year%4==0 && (year%100!=0 ||  year%400==0)? printf("year is leap year ") : printf("year is not leap year ");

return 0;
}


