#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\demo.txt", "r");
    int Ccnt = 0, Vcnt = 0, Dcnt = 0;
    char ch;
    do
    {
        ch = fgetc(fptr);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            Vcnt++;
        else if (ch >= '0' && ch <= '9')
            Dcnt++;
        else
            Ccnt++;

        if (ch == -1)
            break;
    } while (1);
    printf("\nVowels %d \nDigits %d \nConsonant %d ",Vcnt ,Dcnt ,Ccnt);
}