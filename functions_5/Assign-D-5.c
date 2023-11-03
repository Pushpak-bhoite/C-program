#include <stdio.h>
int neon(int);
int main()
{
    int a = 9;
    int ans,t=a;
    a = a * a;
    ans=neon(a);
    if(ans==t){
        printf("Neon");
    }else{
        printf("Not");
    }
}

int sq, rem, sum = 0;
int neon(int a)
{
    if (a)
    {
        rem = a% 10;
        sum = sum + rem;
        a = a / 10;
        neon(a);
    }
    return sum;
}