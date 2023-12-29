// WAP to create file name as employee.txt and store id, name, sal of employee in file and input
// employee type if employee type is permanent then store data in file otherwise not

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\employee.txt", "w");
    int id;
    char name[20];
    char type[10];
    printf("\nEnter Details \n ");
    scanf("%d%s%s",&id,&name,&type);
    if (strcmp(type, "perman1nt") == 0)
    {
        fprintf(fptr,"%d \t %s \t %s",id,name,type);
        printf("\nEmployee saved ");
    }
    else
    printf("Sorry");
    fclose(fptr);
}