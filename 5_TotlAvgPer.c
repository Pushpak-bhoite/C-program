#include<stdio.h>
int main(){
    printf("Enter two angles \n");
    float a,b,c,d,e,f,totl,avg,per;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    totl = a+b+c+d+e;
    avg = totl/5;
    per = (totl/500)*100;
    printf("Total will be :%f",totl);
    printf("Average angle will be :%f",avg);
    printf("Percentage angle will be :%f",per); 

    return 0;
    }