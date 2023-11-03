#include <stdio.h>
#include <string.h>
int main()
{
    char str[50] = "INDIA";
    int len = strlen(str);
    printf("%d",len);
     len = sizeof(str);
    printf("%d",len);
}