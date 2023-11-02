#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "hi india"; //0=\0
    int cnt=0;
    for (int i = 0; str1[i] != 0; i++)
    {
        printf("%c", str1[i]);
        cnt++;
    }
    // if(0=='\0'){
    //     printf("\n true");
    // }
    printf("\n%d", cnt);
}