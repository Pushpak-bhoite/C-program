#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int no;
    float marks;
};

int main()
{
    struct student s[3];
    printf("Enter data for 3 student ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &s[i].name);
        scanf("%d", &s[i].no);
        scanf("%f", &s[i].marks);
    }
    // Show
    printf(" Name\t no \t marks \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", s[i].no);
        printf("%s\t", s[i].name);
        printf("%f\n", s[i].marks);
    }

    // Topper details
    float  max = s[0].marks;
    int k;
    for (int i = 0; i < 3; i++)
    {
        if (s[i].marks > max)
        {
            max = s[i].marks;
            k = i;
        }
    }
    printf("\nRecord of topper is => \n");
    printf("\n%d\t%s\t%f\n", s[k].no, s[k].name, s[k].marks);

    // who are above 75
    printf("Above 75 students  \n");
    for (int i = 0; i < 3; i++)
    {
        if (s[i].marks > 75)
        {
            printf("\n%d\t%s\t%f\n", s[i].no, s[i].name, s[i].marks);
        }
    }
    printf(" sort In descending as per percentage \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                struct student t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
        //show
    printf(" Name\t no \t marks \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", s[i].no);
        printf("%s\t", s[i].name);
        printf("%f\n", s[i].marks);
    }

    return 0;
}