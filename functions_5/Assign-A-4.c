// Menu driven program using switch case
// 1.positive or -ve no
// 2.check no even or odd
// 3.find max no using 3 no
#include <stdio.h>
int main()
{
    int psNg(int);
    int evOd(int);
    int max(int ,int ,int);
    int x,a,b,c, ch, ans;
    printf("Enter no \t");
    scanf("%d",&x);
    printf("Enter choice 1:-ve/+ve 2:ev/Odd 3:find max \t");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        ans = psNg(x);
        printf("no= %d",ans);
        break;
    case 2:
        ans = evOd(x);
        printf("no= %d",ans);
        break;
    case 3:
        printf("Enter 3 no\n");
        scanf("%d%d%d",&a,&b,&c);
        ans = max(a,b,c);
        printf(" max =%d",ans);
        break;

    default:
        break;
    }
}

int psNg(int x)
{
    if(x>0)
    return 1;
    else
    return 0;
}
int evOd(int x)
{
    if(x%2==0)
    return 1;
    else
    return 0;
}
int max(int a,int b,int c)
{
    if(a>b &&a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}