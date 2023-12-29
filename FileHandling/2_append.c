// In append mode pointer points at end of the line / file char 

#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\demo.txt","a");
    printf("\nEnter Data in file \n");
    do
    {
        scanf("%c",&ch);
        if(ch=='$')
        break;
        fputc(ch,fptr);
    } while (1);//infinite loop
    
    printf("\nFile Createde successfully ");
    fclose(fptr);
}