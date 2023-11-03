#include<stdio.h>
#include<string.h>
int main(){
    char str[7]="hello";
    int len =strlen(str);
    printf("%d \n",len);
    for (int i = 0; i < (len/2); i++)
    {
        char ch=str[i];
        str[i]=str[len-(i+1)];
        str[len-(i+1)]=ch;
    }
    printf("%s",str);
}