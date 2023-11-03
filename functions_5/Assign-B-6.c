#include <stdio.h>
int main()
{
    int choice, ch, no, ans;
    int prime(int);
    int perfect(int);
    int duck(int); // declaration

    do
    {
        printf("\nEnter Choice ");
        printf("1---> For Prime Number ");
        printf("2---> For Perfect Numer ");
        printf("3---> For Duck Number \n");
        scanf("%d", &choice);
        printf("Enter No\n");
        scanf("%d", &no);
        switch (choice)
        {
        case 1:
        {
            ans = prime(no);
            if (ans)
            {
                printf("\tPrime");
            }
            else
            {
                printf("\tNot Prime");
            }
            break;
        }

        case 2:
            ans = perfect(no);
            if (ans)
            {
                printf("\tPerfect");
            }
            else
            {
                printf("\tNot Perfect");
            }
            break;
        case 3:
            ans = duck(no); // calling
            if (ans)
            {
                printf("\tDuck");
            }
            else
            {
                printf("\tNot");
            }
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            printf("\nWrong choice");
            break;
        }
        printf("\nDo you want to continue\t");
        scanf("%d", &ch);
    } while (ch);
}

int prime(int no)
{
    int flag = 1;
    for (int i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = 0;
        }
    }
    if (flag)
        return 1;
    else
        return 0;
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

int duck(int no)
{ // fun defintion
    int rem, flag = 0;
    while (no)
    {
        rem = no % 10;
        no = no / 10;
        if (rem == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}