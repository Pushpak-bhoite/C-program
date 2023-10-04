#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char ch = 64;
        for (int j = 1; j <= 9; j++)
        {
            if(j<=i){
              ch++;
              printf("%c",ch);
            }
            if(j==i && ){
              ch--;
              printf("%c",ch);
            }
        }
        printf("\n");
    }
}