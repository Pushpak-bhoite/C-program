#include <stdio.h>
struct Book
{
    int id;
    char name[20];
    int price;
    char auther[20];
};
int size;
int main()
{
    struct Book b[10];
    int choice1, choice2,sid;
    size=2;
    do
    {
        printf("\nEnter choice \n1.add \n2.display \n3.dosplayt acco to price range \n4.search & update datails \n6.Delete \n7.count books acco to details \n8.sort \n9.try again \n10.exit tp 0\n");
        scanf("%d", &choice1);
        switch (choice1)
        {
        case 1:
            printf("\nEnter Book Details ");
            for (int i = 0; i <= size; i++)
            {
                scanf("%d%s%d%s", &b[i].id, &b[i].name, &b[i].price, &b[i].auther);
            }
            
            break;
        case 2:
            printf("\nId\tName\tPrice\tAuther");
            for (int i = 0; i <= size; i++)
            {
                printf("\n%d\t%s\t%d\t%s", b[i].id, b[i].name, b[i].price, b[i].auther);
            }
            break;
        case 3:
            printf("\nId\tName\tPrice\tAuther");
            for (int i = 0; i <= size; i++)
            {
                if (b[i].price >= 100 && b[i].price <= 500)
                {
                    printf("\n%d\t%s\t%d\t%s", b[i].id, b[i].name, b[i].price, b[i].auther);
                }
            }
            break;
        case 4:
            printf("Enter id\n");
            scanf("%d", &sid);
            for (int i = 0; i <= size; i++)
            {
                if (b[i].id == sid)
                {
                    printf("\nId\tName\tPrice\tAuther");
                    printf("\n%d\t%s\t%d\t%s", b[i].id, b[i].name, b[i].price, b[i].auther);
                    printf("\nEnter new details\n");
                    scanf("%d%s%d%s", &b[i].id, &b[i].name, &b[i].price, &b[i].auther);
                    printf("\n New details\n");
                    printf("\n%d\t%s\t%d\t%s", b[i].id, b[i].name, b[i].price, b[i].auther);
                }
            }
        case 5:
            printf("\nEnter Id\t")    ;
            scanf("%d",&sid);
            for (int i = 0; i <= size; i++)
            {
                if (b[i].id == sid)
                {
                    for (int i = 0; i <=2; i++)
                    {
                        b[i]=b[i+1];
                    }
                }
            }
            size --;
            break;

        default:
            printf("Wrong choice ");

            break;
        }
        printf("\nDo you want to continue\n");
        scanf("%d",&choice2);
    } while (choice2);
}