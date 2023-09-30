#include <stdio.h>
int main()
{
    int no = 123, rem, rev=0, i;
    int temp = no;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        rev = rev * 10 + rem;
        
    }
    
        printf("%d",rev) ;
    
}