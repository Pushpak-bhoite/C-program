#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("C:\\Users\\bhoit\\Desktop\\Giri\\Giri's_C_program\\Filehandling-files\\employee.txt", "r");
    int id;
    char name[30], type[10];
    while (fscanf(fptr, "%d%s%s", &id,&name,&type) != -1)
        printf("\n%d \t %s \t %s", id, name, type);

    fclose(fptr);
}