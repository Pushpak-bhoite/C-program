#include<stdio.h>
int main(){
    char ch[50]="1a3jh6";
    int sum=0;
    for (int i = 0; ch[i] != 0; i++)
    {
        if (ch[i]>='1' && ch[i]<='9')
        {
            int x=ch[i]-48;
            sum=sum+x;
        }
    }
    printf("%d",sum);
    
}