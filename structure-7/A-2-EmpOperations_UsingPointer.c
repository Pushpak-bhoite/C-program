#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int sal;
};
struct employee *ptr;
int main()
{
    int size = 2;
    ptr = (struct employee *)malloc(sizeof(struct employee) * size);
    int i;
    strcpy(ptr[0].name, "a"), ptr[0].id = 1, ptr[0].sal = 111;
    strcpy(ptr[1].name, "b"), ptr[1].id = 2, ptr[1].sal = 222;
    // for (i = 0; i < 2; i++)
    // {
    //     printf("Enter data \n");
    //     scanf(" %d %s %d", &ptr[i].id, &ptr[i].name, &ptr[i].sal);
    // }

    int choice, no;
    do
    {
        printf("Enter case no :\n");
        scanf("%d", &no);
        switch (no)
        {
        case 1:
        {
            // show
            printf("id\tname\tsal\n");
            for (i = 0; i < size; i++)
            {
                printf("%d\t%s\t%d\n", ptr[i].id, ptr[i].name, ptr[i].sal);
            }
            break;
        }
        case 2:
        {
            // add
            ptr = (struct employee *)realloc(ptr, size + 1);
            printf("Enter data ");
            scanf(" %d %s %d", &ptr[size].id, &ptr[size].name, &ptr[size].sal);
            size++;
            break;
        }
        case 3:
        {
            // delete
            printf("enter name of the emp\n");
            char cht[20];
            scanf("%s", cht);                           //*** we dont need to use "&"
            for (int i = 0; i < size; i++)
            {
                if (strcmp(ptr[i].name, cht) == 0)
                {
                    for (int i = 0; i < size; i++)
                    {
                        ptr[i] = ptr[i + 1];
                    }
                    size--;
                    printf("Deleted");
                    i--;
                }
            }
            break;
        }
        default:
            printf("Wrong choice\n");
            break;
        }

        printf("\nDo u want to continue\n");
        scanf("%d", &choice);
    } while (choice);

    return 1;
}

// #include <stdio.h>
// #include <stdlib.h>
// struct Player
// {
//     int id;
//     char name[90];
//     int run;
// };

// struct Player *ptr;
// int main()
// {
//     int size=2;
//     // printf("\nEnter size of array\n");
//     // scanf("%d", &size);
//     ptr = (struct Player *)malloc(sizeof(struct Player) * size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("\nEnter name id and run of player\n");
//         scanf("%s %d %d", &ptr[i].name, &ptr[i].id, &ptr[i].run);
//     }
//     printf("\nDisplay all player details\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%s\t%d\t%d\n", ptr[i].name, ptr[i].id, ptr[i].run);
//     }
//     return 0;
// }
