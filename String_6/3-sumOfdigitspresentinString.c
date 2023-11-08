#include<stdio.h>
int main(){
    char ch[90];
    printf("\nEnter string value \n");
    gets(ch);
    int cnt=0,sum=0;
    for (int i = 0; ch[i] != 0; i++)
    {
        if(ch[i]>=48 && ch[i]<=57){
            printf("\n %d ",ch[i]);
            sum +=(ch[i]-48);
        }
    }
    printf("\nsum = %d ",sum);
}