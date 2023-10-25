#include <stdio.h>
int main()
{
    int a[2][2]={{0,1},{1,0}};
    // printf("Enter The Matrix");
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         scanf("%d", a[i][j]);
    //     }
    // }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d",a[i][j]);
            
        }
        printf("\n");
    }
    int cnt,flag;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(a[i][j]==0){
                cnt++;
                if (cnt>2)
                {
                    printf("this is sparse")   ;
                    flag=0;
                    break;
                }
                
            }
            
        }
    }
    if (flag)
    {
        printf("Not sparse");
    }
    

       
    
}