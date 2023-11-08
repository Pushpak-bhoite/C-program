#include <stdio.h>
int main()
{
    char str[30] = {" we  love  programming   "};
    int flag = 1;
	int i;
    for (i = -1; str[i] != 0; i++)
    {
        if ((i == -1 || str[i] == ' ') && (str[i + 1] != ' '))
        {
            int start = i + 1;
            int end;
            int j ;
            for (j = start; str[j] != 0; j++)
            {
                if(str[j]==' '){
                        break;
                }
                end = j;
            }
            int k,m;
            for (k = start, m = end; k < m; k++, m--)
            {
                // swapping
                char tch = str[k];
                str[k] = str[m];
                str[m] = tch;
            }
        }
    }

    printf("%s", str);
}
