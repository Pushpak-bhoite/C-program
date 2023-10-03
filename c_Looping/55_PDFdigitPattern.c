#include<stdio.h>
int main(){
    int no=0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if(j>=6-i && j<=4+i){
                if(j <= 5 ){
                    no++;
                    printf(" %d",no);
                }else{
                    no=--no;
                    printf(" %d",no);
                }
            }else{
            printf("  ");

            }
        }
        no=no++;
        printf("\n");
    }
    
}