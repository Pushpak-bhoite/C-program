#include <stdio.h>
int main()
{
    int no = 5,a=1;

    char ch='A';
    for (char i = 1; i <= no; i++)
    {
        for (char j = 1; j <= no; j++){
            if (i%2== 0)
                printf("%d",a);
            else 
            {
                printf("%c",ch);
            }
        }
                printf("\n");
        if(i%2==0){
            a++;
        }else{
            ch++;
        }
    }
}