#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, nthali, rmanp, ethali, osthali, emanp, i;
    printf("\nEnter number of thali");
    scanf("%d", &nthali);
    rmanp = nthali / 10;
    ptr = (int *)malloc(sizeof(int) * rmanp);
    printf("\nEnter data  of employee\n");
    for (i = 0; i < rmanp; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("\nenter onspot thali\n");
    scanf("%d", &osthali);
    if (osthali > nthali)
    {
        ethali = osthali - nthali;
        emanp = ethali / 10;
        ptr = (int *)realloc(ptr, sizeof(int) * emanp);
        printf("\nEnter data for extra manpower\n");
        for (i = rmanp; i < (rmanp + emanp); i++)
        {
            scanf("%d", &ptr[i]);
        }
        printf("\nDisplay all employee\n");
        for (i = 0; i < (rmanp + emanp); i++)
        {
            printf("%d\t", ptr[i]);
        }
    }
    else
    {
        printf("No extra manpower required");
    }
    return 0;
}
