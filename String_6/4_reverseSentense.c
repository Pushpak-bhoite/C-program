#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void reverse(char[]);
int main()
{
    char a[200]={"    Rev the string "}, res[200]="", word[50];
    int i, j;
    printf("Enter a String \n");
    // gets(a);
    printf("Orignal string is = %s \n", a);
    strcat(a,"* ");         //space added at last 
    j=0;
    for (i = 0 ; a[i] != '\0'; i++)
    {
        if(a[i]==' '){
            word[j]='\0';
            strrev(word);
            strcat(res,word);
            strcat(res," ");
            j=0;
        }
        else{
            word[j]=a[i];
            j++;
        }
    }

    printf("Reverse of string = %s \n", res);
    puts(res);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch[15] = {" hare ram nam "};
//     int end = (strlen(ch)); // 12
//     for (int i = 0; ch[i] != 0; i++)
//     {
//         if (ch[i] != ' ') // && ch[i+1] != ' '
//         {

//             int start = i, flag = 1 , cnt = 0;;
//             for (int j = start; (ch[j] != '\0' && flag); j++)
//             {
//                 if (ch[j] == ' ')
//                     flag=0;
//                 if (ch[j]=='0')
//                     break;

//                 char t1 = ch[i];

//                 for (int k = start; k < end; k++)
//                 {
//                     ch[k] = ch[k + 1];
//                 }
//                 ch[end] = t1;
//                 cnt++;
//                 j = j - 1;
//             }
//             end = end - cnt;
//         }
//         i = i - 1;
//     printf("\n%s", ch);
//     }
//     printf("\n****");
//     for (int i = 0; i < 13; i++)
//     {
//         printf("%c",ch[i]);
//     }
//     printf("\n****%s", ch);
// }