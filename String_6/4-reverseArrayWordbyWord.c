#include <stdio.h>
#include <string.h>
int main()
{
    char ch[13] = {"hare ram nam"};
    int end = (strlen(ch));  //12
    int cnt=0;
    for (int i = 0; ch[i] != 0; i++)
    {
        if ((i == 0 || ch[i] == ' '))  // && ch[i+1] != ' '
        {
            int start = i;
            for (int j = start; ch[j-1] != ' '; j++)
            {       
                    char t1 = ch[i];
                    for (int k = start; k != end-cnt; k++)
                    {   
                        ch[k] = ch[k+1];
                    }
                    ch[end] = t1;
                    // ch[i] = ch[end];
            }
        }
    }
        cnt++;

    printf("%s",ch);
}