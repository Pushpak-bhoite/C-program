#include <stdio.h>
int main()
{
    int a[3][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };
    int sum=0;
    for (int i =0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j+i==2)        //this is for right digonal
            {
            sum=sum+a[i][j];
            printf("%d ",a[i][j]);
            }

            if (j-i==0)        //this is for left digonal
            {
            sum=sum+a[i][j];
            printf("%d ",a[i][j]);
            }
        }
        
    }
            printf("\n%d",sum);
    

}