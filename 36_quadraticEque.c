// quadratic equetion ax^2 + bx + c = 0;
//                                  _________
//roots of quadratic equetion  -b+-/b^2 - 4ac  /(2a)
// Discriminant (D)  b^2 - 4ac 
// D<0   no roots (1 1 1)
// D=0 equal roots (a=1 ,b=-6 ,c=9)
// D>0 two distinct roots  (a=1 ,b=-7 ,c=12 )
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    float r1,r2;
    //suppose a=1 ,b=-7 ,c=12 
    //suppose a=1 ,b=-6 ,c=9
    //and  1 1 1

    printf("Enter a b c ");
    scanf("%d%d%d",&a,&b,&c);
    d= b*b - 4*a*c;
    if (d>0){
        r1= (-b+sqrt(d))/(2*a);
        r2= (-b-sqrt(d))/(2*a);
    }else if(d==0){
        printf("roots are equal\t");
        r1=-b/(2.0*a);
        r2=-b/(2.0*a);

    }else if(d<0){
        printf("Imaginary");
    }
    printf("%f\t%f",r1,r2);
    return 0;
}