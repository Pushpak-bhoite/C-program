#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++){
    int no=0;
        for (int j = 1; j <= 7; j++)
        {
            if (((i <= 4) && j <= 3 + i && j >= 5 - i) || (i >= 5 && j >= i - 3 && j <= 11 - i))
            {

                if ((j == 3 + i || j == 5 - i)  || ( j == i - 3 || j == 11 - i))
                {
                    printf("*");
                }
                
                else
                {
                    if(j<=4){
                        no++;
                    printf("%d",no);
                    }else{
                        no--;
                        printf("%d",no);
                    }

                }
            }else{
                printf("");
            }
        }
            printf("\n");
    }
}