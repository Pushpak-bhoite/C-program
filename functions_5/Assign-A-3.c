// Menu driven program using switch case
// 1.addition
// 2.substraction
// 3.multiplication
#include <stdio.h>
int main()
{
    int add(int, int);
    int sub(int, int);
    int mul(int, int);
    printf("Enter two values\t");
    int x, y, ch, ans;
    scanf("%d %d", &x,&y);
    printf("Enter choice 1:add 2:sub 3:mul \t");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        ans = add(x, y);
        printf("%d",ans);
        break;
    case 2:
        ans = sub(x, y);
        printf("%d",ans);
        break;
    case 3:
        ans = mul(x, y);
        printf("%d",ans);
        break;

    default:
        break;
    }
}

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}