// this is app program 9
#include<stdio.h>
int main(){
            //0 1 2  3 4 5
    int a[6]={6,8,4,-5,7,9};
    int no;
    printf("Enter no such that index elment's sum should be that nunmber ",no); //enter no 15
    scanf("%d",&no);
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if(a[i]+a[j]==no){
                printf("%d  %d \n",i,j);
            }
        }
        
    }
    
}