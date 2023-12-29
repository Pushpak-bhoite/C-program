/*If we want to write different type of data in file we have fprintf() function from stdio.h header file.
 Syntax: fprintf(filepointer,”format specifier”,variablename);
Example: we want to create program to create file name as student.txt and store student name, id and per of student in file*/
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\demo2.txt","a");
    char name[20];
    int id;
    float per;
    printf("\nEnter Details \n");
    scanf("%s %d %f",&name,&id,&per);
    fprintf(fptr,"%s \t %d \t %f \n",name,id,per);
    fclose(fptr);
    printf("\nStudent Save Success ");
}
