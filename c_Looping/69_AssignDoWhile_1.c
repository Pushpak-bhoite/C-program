// Palindrome or not
#include <stdio.h>
int main()
{
    int no = 0, rem, rev = 0;
    int temp = no,cnt=1;

    do
    {
        rem = no % 10;
        no = no / 10;
        rev = rev * 10 + rem;

    } while (no != 0);

    if (temp == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not");
    }
}