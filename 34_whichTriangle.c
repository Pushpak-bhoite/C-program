#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("please enter the sides of triangle");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 + s2 >= s3 && s2 + s3 >= s1 && s1 && s1 + s3 >= s2)
    {
        if (s1 == s2 && s2 == s3)
        {
            printf("Equilateral");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("isoscale");
        }
        else
        {
            printf("scalen");
        }
    }
    return 0;
}