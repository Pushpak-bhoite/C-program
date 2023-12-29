#include<stdio.h>
int main(){
   FILE *fptr;
    fptr=fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\demo.txt","w");
    printf("\nFile Createde successfully ");
    fclose(fptr);
}