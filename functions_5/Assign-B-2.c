#include <stdio.h>
int main()
{
    int perfect(int);
    int no;
    printf("Enter No\n");
    scanf("%d", &no);
    int ans = perfect(no);
    if (ans)
    {
        printf("\tPerfect");
    }
    else
    {
        printf("\tNot Perfect");
    }
}

int perfect(int no)
{ // fun defintion
    int flag = 1, sum = 0;
    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == no)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}