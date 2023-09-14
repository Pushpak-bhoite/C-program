#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter Area \n");
    float a,b,c,t;
    scanf("%f",&a);
    t = (1.732/4)*a*a;
    
    printf("Area of equilateral triangle :%f", t);
    return 0;
    }