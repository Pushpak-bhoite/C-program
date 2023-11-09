#include <stdio.h>
#include <stdlib.h>
struct Player
{
    int id;
    char name[90];
    int run;
};

struct Player *ptr;
int main()
{
    int size = 2;
    // printf("\nEnter size of array\n");
    // scanf("%d", &size);
    ptr = (struct Player *)malloc(sizeof(struct Player) * size);
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter name id and run of player\n");
        scanf("%s %d %d", &ptr[i].name, &ptr[i].id, &ptr[i].run);
    }
    printf("\nDisplay all player details\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\t%d\t%d\n", ptr[i].name, ptr[i].id, ptr[i].run);
    }
    return 0;
}
