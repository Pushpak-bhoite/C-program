#include <stdio.h>
int main()
{
    int a, b, t, choice;
    
    printf("Add:1 , Sub:2, Mul:3 , Div : 4, Mod :5\n Enter Choice ");
    scanf("%d",&choice);
    scanf("%d%d",&a,&b);
    switch (choice)
    {
    case 1:
    {
        t = a + b;
        break ;
    }
    case 2:
    {
        t = a - b;
        break ;
    }
    case 3:
    {
        t = a * b;
        break ;

    }
    case 4:
    {
        t = a / b;
        break ;

    }
    case 5:
    {
        t = a % b;
        break ;

    }
    default :{
        printf("Invalid");
    }
    }
    printf("%d",t);
    return 0;
}