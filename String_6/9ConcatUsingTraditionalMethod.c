#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void concat(char* a,char* b){
    int len=strlen(a);
    for (int  i = 0; a[i]!= 0  ; i++)
    {
        a[len+i]=b[i];
    }
    
}
int main(){
    char s1[50]="hare rama ";
    char s2[50]="Hare Krishna ";
    printf("%s\n",s1);
    concat(s1,s2) ;
    printf("%s\n",s1);
    s1[1]=s1[1]+1;
    printf("\n%s",s1);
}
