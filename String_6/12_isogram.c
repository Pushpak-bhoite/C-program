//An isogram is a word or phrase in which no letter occurs more than once
//Ex:dialogue,isogram
//deed,intestine
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void isogram(char * s){
    int l=strlen(s);
    int cnt1=1,cnt2=0,flag=1;
    for (int i = 0; s[i] != 0; i++)
    {
        cnt1=1;
        for (int j = i+1; j = 0; j++)
        {
            if (s[i]==s[j])
            {
                cnt1++;
            }
            
        }
        if (i>0)
        {
           if(cnt1 != cnt2)
           flag=0;
           break;
        }
        cnt2=cnt1;
    }
    if (flag)
        printf("Not  isogram ");
    else
        printf("Isogram")    ;
}
int main(){
    char s[50]="deed";
    isogram(s);
}