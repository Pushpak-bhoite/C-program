#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char ch = 64;
        for (int j = 1; j <= 9; j++)
        {
            if( j<=4+i && j>=6-i ) {
                if(j<=5 ){
                    ch++;
                    printf("%c",ch);
                }else{
                    ch--;
                    printf("%c",ch);
                }
            }else{
                printf("");
            }

        }
        printf("\n");
    }
}