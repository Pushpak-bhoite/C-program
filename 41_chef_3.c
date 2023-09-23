#include <stdio.h>
int main()
{
    int amt,tamt = 2000;
    float bal;
    printf("Enter The Amt :\t");
    scanf("%d", &amt);
    if (amt%5==0&&amt< (tamt-1))
    {
         bal =(float)tamt - (amt + 0.50);

        printf("your transaction is successfully Your rem balnce is %f", bal);
    }else{
                printf("you Dont Have sufficient Balnce  %f", tamt);

    }
}