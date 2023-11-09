#include<stdio.h>
int main(){
    char ch[5] ;// ="ABCDE";
    char *ptr;
    ptr=&ch[0];
    printf("%u\n",ptr);
    printf("%u\n",ch);

    printf("Enter Data\n");
    for (int i = 0; i < 5; i++)
    {
       printf("%d \n",ptr+i);
        scanf("%s",&ptr[i]);
    }
    printf("%u\n",ptr);
    printf("%u\n",ch);
    // printf("%u\n",*ch);
    for (int i = 0; i < 5; i++)
    {
        printf("%c ",*(ch+i));
    }
        printf("%s ",(ptr));
}