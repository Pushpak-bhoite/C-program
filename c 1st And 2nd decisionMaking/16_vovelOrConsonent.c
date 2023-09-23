// A-Z=65-90
// a-z=97-122
// 0-9=48-54

#include<stdio.h>
int main(){
char ch;
printf("Enter The No :\t");
scanf("%c",&ch);
(ch>=65 && ch<=90 )? ch=ch+32   :ch;
    //to convert Capital to small;

 ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='s' ? printf("%c \t Is vovel ",ch) : printf("%c \t Is Consonent ",ch);

return 0;
}


