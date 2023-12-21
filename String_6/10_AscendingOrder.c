
#include <stdio.h>
int main()
{
    char s1[50] = "This is my kingdom";
    // convert to Upper case
    for (int i = 0; s1[i] != 0; i++)
    {
        if (s1[i] >= 97 && s1[i] <= 122)
        {
            s1[i] = s1[i] - 32;
        }
    }
    printf("%s", s1);//capital case

    for (int i = 0; s1[i] != 0; i++)
    {
        for (int j = i+1; s1[j] != 0; j++)
        {
            if(s1[i]>s1[j]){
                char temp=s1[i];
                 s1[i]=s1[j];
                 s1[j]=temp;
            }
        }
    }
    printf("\n%s", s1);//capital case
}