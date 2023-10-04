#include<stdio.h>
int main(){
   int  no=2;
    for (int i = 1; i <= 7 ; i++)
    {   no++;
        for (int j = 1; j <= 5; j++)
        {
            if(((i<=4)&&(j<=i)) || ((i>=5) && (j<= 8-i))){
                    printf("%d",no);
            }else{

            printf("-");
            }
        }
        printf("\n");
        
    }
    
}