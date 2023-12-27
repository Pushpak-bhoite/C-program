// very IMP structure
#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    int sal;
};

int main()
{
    struct employee *p, e;
    p = &e;

    printf("Enter data for \n");
    scanf("%d%s%d", &e.id, &p->name, &(p[0]).sal);    //
    printf("\nEnter choice 1.add emp 2. dislplay 3. search \n");

    printf("id\tname\tsal\n");
    printf("%d\t%s\t%d\n", p->id, (*p).name, p[0].sal); // throw glance over here (e=*p) or (*p=p->) or (p->=p[0])
    // at the end e=*p=p->p[0]
}