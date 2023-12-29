#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\demo.txt", "r");
    do
    {
        ch = fgetc(fptr);
        if (ch == -1)
            break;
        printf("%c",ch);
    } while (1);
}