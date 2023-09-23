#include <stdio.h>
int main()
{
    int a, b, c, d, e, Comp, per;
    char grade;
    printf("Enter The Number Marks of 5 sub");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    per = ((a + b + c + d + e) * 100 / 500);
    if (per >= 90)
    {
        printf("A");
    }
    else if (per >= 80)
    {
        printf("B");
    }

    else if (per >= 70)
    {
        printf("c");
    }

    else if (per >= 60)
    {
        printf("D");
    }
    else{
        printf("e");
        
    }
    printf("%d", per);
}