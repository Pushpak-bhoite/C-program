#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float sal;
};

int main(){
    struct employee *e;
    
     printf("Enter data for 3 student \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &e[i].id);
        scanf("%s", &e[i].name);
        scanf("%f", &e[i].sal);
    }
    int choice;
    printf("\nEnter choice 1.add emp 2. dislplay 3. search \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        
        break;
    
    default:
        break;
    }

}