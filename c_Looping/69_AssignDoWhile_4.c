// Duck
#include <stdio.h>
int main()
{
    int no = 06611, i = 1,rem,flag =0,sum = 0;
    do
    {
        rem=no%10;
        if(rem==0){
            flag=1;
        }
        no=no/10;
    } while (no);

    if (flag)
    {
        printf("Duck");
    }
    else
    {
        printf(" Not Duck");
    }
}