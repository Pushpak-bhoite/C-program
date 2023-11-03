// Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
int main()
{
    char ch[50] = "vovels";
    char check[50] = "AEIOUaeiou";
    char vovel[50], conso[50];
    int v = 0, c = 0 ;
    
    for (int i = 0; ch[i] != '\0'; i++)
    {
        int flag=1;
        for (int j = 0; check[j] != '\0'; j++)
        {
            if (ch[i] == check[j])
            {
                vovel[v]=ch[i];
                v++;
                flag=0;
                break;
            }
        }
        if(flag){
            conso[c]=ch[i];
            c++;
        }
    }
printf("\nconsonant = %d vovels = %d ",c,v);
}