#include <stdio.h>
void perfect(int);
int main()
{
    int no = 6;
    perfect(no);
}
int i = 1;
int sum = 0, flag = 1;

void perfect(int no)
{

    if (i < no)
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
        i++;
        perfect(no);
    }
    else
    {
        if (sum == no)
        {
            printf("Perfect ");
        }
        else
        {
            printf("Not ");
        }
    }
}