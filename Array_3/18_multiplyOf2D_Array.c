#include<stdio.h>
#include<windows.h>
int main(){
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};

    int b[3][3]={{1,2,3},
                 {1,2,3},
                 {1,2,3} };
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum=0;
            for (int k = 0; k < 3; k++)
            {
                sum=sum + a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",sum);
            Sleep(300);
        }
        printf("\n");
    }

    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

}