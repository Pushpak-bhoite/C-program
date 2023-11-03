// copy string 
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "hi india"; //0=\0
    char str2[50];
    int cnt=0;
    // for (int i = 0; str1[i] != 0; i++)
    // {
    //     printf("%c", str1[i]);
    //     cnt++;
    // }
    // printf("\n%d", cnt);


//copy string using function
    strcpy(str2,str1);
    printf("%s", str2);

    // if(0=='\0'){
    //     printf("\n true");
    // }
}