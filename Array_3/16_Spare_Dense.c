// if matrix has too much zeroes and less numbers then it is sparse number
#include<stdio.h>
int main(){
    int a[3][3]={{0,1,0},{0,2,0},{0,3,0}};
    int cnt1,cnt2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j]==0){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        
    }
    if(cnt1>cnt2){
        printf("matrix is Sparse ");
    }else{
        
        printf("matrix is Dense ");
    }
    
}