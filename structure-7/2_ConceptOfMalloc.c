// structure using pointer
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[20];
    int sal;
};

int main(){
    struct employee *e ;
    int size=1;
    e=(struct employee *)malloc(sizeof(struct employee)*size);
    printf("Enter the number Data");
    scanf("%d%s%d",&(*e).id,&e[0].name,&e[0].sal);
    printf("%d,%s,%d",e[0].id,e->name,(*e).sal);
}