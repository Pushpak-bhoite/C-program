#include <stdio.h>
int main()
{
    int choice, no;
    printf("Enter Choice & no for \n1:nth prime no \n2:perfect number\n3:1 to nth duck number \n4:1 to nth strong number\n5:1 to nth Armstrong number\n ");

    scanf("%d%d", &choice, &no);

    switch (choice)

    {
    case 1: // prime Number
        for (int i = 2; i <= no; i++)
        {
            int cnt = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                    cnt++;
            }
            if (cnt == 0)
            {
                printf("%d ", i);
            }
        }

        break;
    case 2: // perfect number
        for (int i = 1; i <= no; i++)
        {
            int sum = 0;
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    sum = sum + j;
                }
            }
            if (i == sum)
            {
                printf("%d ", i);
            }
        }

        break;
    case 3: // Duck number
    {
        int rem, duck;
        for (int i = 1; i <= no; i++)
        {
            duck = i;
            while (duck)
            {
                rem = duck % 10;
                duck = duck / 10;
                if (rem == 0)
                {
                    printf("%d ", i);
                }
            }
        }
    }
    break;
    case 4: // Strong number
        for (int i = 1; i <= no; i++)
        {
            int sum = 0;
            int str = i, rem;
            while (str)
            {   
                int p = 1;
                rem = str % 10;
                str = str / 10;
                for (int j = rem; j <= 1; j--)
                {
                    p = p * j;
                }
                sum = sum + p;
            }
        }

    default:
        break;
    }
}