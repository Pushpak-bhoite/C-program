#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
     char str1[20]="a gentleman",str2[20]="elegant man";  //heart ,earth
     int l1=strlen(str1);
     int l2=strlen(str2);
     int cnt=0;
     if (l1==l2)
     {
        for (int i = 0; str1[i] != 0 ; i++)
        {
            for (int j = 0; str2[j]!= 0; j++)
            {
                if (str1[i]==str2[j])
                {
                    cnt++;
                    break;
                }
            }
        }
     }
     printf("%d\n",cnt);
     if(cnt ==l1){
        printf("Anagram");
     }else{
        printf("Not Anagram");
     }
}