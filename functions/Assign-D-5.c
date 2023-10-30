#include <stdio.h>
void neon(int);
int main()
{
    int a = 9;
    neon(a);
}

int sq, rem, sum = 0;
void neon(int a)
{
    sq = a * a;
    while (sq)
    {
        rem = sq% 10;
        sum = sum + rem;
        sq = sq / 10;
    }
    if (a == sum)
    {
        printf("neon");
    }
    else
    {
        printf("Not");
    }
}