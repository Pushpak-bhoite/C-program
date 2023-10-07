// Strong
#include <stdio.h>
int main()
{
    int no = 145, i = 1,rem,sum = 0;
    int temp=no;
    do
    {
        rem=no%10;
       int p=1;
        while (rem!=0)
        {
            p=p*rem;
            rem--;
        } 
        sum=sum+p;
        no=no/10;
    } while (no);
    if (sum==temp)
    {
        printf("Strong");
    }
    else
    {
        printf(" Not");
    }
}