// its just extende version of 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[50]={"    rev the string    "},rev[50]="",word[50];
    int i,j=0;
    strcat(s," "); //i've used (" ") double quote bcoz its string 
    for ( i = 0; s[i]!= '\0' ; i++)
    {
        if (s[i]==' ')
        {
            word[j]='\0';
            strrev(word);
            strcat(rev,word);
            strcat(rev," ");
            j=0;
        }else{
            word[j]=s[i];
            j++;
        }
    }
    strrev(rev);    //using this we reverse the whole string
    puts(rev);
}