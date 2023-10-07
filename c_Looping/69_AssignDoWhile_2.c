// prime
#include <stdio.h>
int main()
{
    int no = 13,i=2 ,rem=0 , div = 0;

    do
    {
        div=(no%i==0);
        rem=rem+div;
        i++;
    } while (i<no);
    if(rem){
        printf("Not Prime");
    }else{
        printf(" Prime");
    }
    
}