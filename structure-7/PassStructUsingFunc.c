//Structure passing using function
#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[90];
    float marks;
} s1;
//   struct student s1;  

void myfunc(struct student s){
    printf("%d,%s,%f\n",s1.id,s1.name,s1.marks);

}

int main(){
    printf("Enter id Name marks ");
    scanf("%d %s %f",&s1.id,&s1.name,&s1.marks);
    printf("%d,%s,%f\n",s1.id,s1.name,s1.marks);
    myfunc(s1);
}
