#include <stdio.h>
int size;
void show(int[]);
void sort(int[]);
void search(int[]);
void add(int[]);
void occurances(int[]);

int main()
{
    int ch, choice;
    printf("Enter size of array \t");
    scanf("%d", &size);
    int a[size];
    printf("Enter Elements \t");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    do
    {
        printf("Enter Choice for\n1.show \n2.sort \n3.search \n4.add \n5.Occurance\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            show(a);
            break;
        case 2:
            sort(a);
            break;
        case 3:
            search(a);
            break;
        case 4:
            add(a);
            break;
        case 5:
            occurances(a);
            break;
        default:
            printf("Wrong Choioce");
            break;
        }
        printf("\nDo you want to continue\n");
        scanf("%d", &ch);
    } while (ch);
}

void show(int a[])
{
    for (int i = 0; i < size ; i++)
    {
        printf("%d ", a[i]);
    }

    printf("");
}

void sort(int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void search(int a[])
{
    int no, flag = 1;
    printf("Enter Number to search ");
    scanf("%d", &no);
    for (int i = 0; i < size; i++)
    {
        if (no == a[i])
        {
            printf("Yes  present");
            flag = 0;
            break;
            ;
        }
    }
    if (flag)
    {
        printf("Not found");
    }
}

void add(int a[])
{
    int id, no;
    printf("Enter id and no\n");
    scanf("%d%d", &id, &no);
    for (int i = size; i >= 0; i--)
    {
        if (id < i)
        {
            a[i] = a[i - 1];
        }
        if (id == i)
        {
            size=size+1;
            a[i] = no;
        }
    }
    printf("size =%d ",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    
}

void occurances(int a[])
    {
        // sort
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (a[i] > a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        int cnt=1;
        for (int i = 0; i < size; i++)
        {
            if(a[i]==a[i+1]){
                cnt++;
            }else{
                printf("\n %d present %d times ",a[i],cnt);
            }
        }
    }