int prime(int, int);
int i = 2, flag = 1;
#include <stdio.h>
int main()
{
    int no = 10,ans;
    ans = prime(no, i);
    if (ans)
    {
        printf("prime No");
    }else{
        printf("Not ");
    }
    
}

int prime(int a, int i)
{
    if (i < a)
    {
        if (a % i == 0)
        {
           return 0;
        }
            prime(a, ++i);
    }else{
   return 1;
    }
}