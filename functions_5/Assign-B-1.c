#include<stdio.h>
int main(){
    int prime(int);
    int no;
    printf("Enter No\n");
    scanf("%d",&no);
    int ans = prime(no);
    if (ans){
        printf("\tPrime");
    }else{
        printf("\tNot Prime");
    }
    
}

int prime(int no){
    int flag=1;
    for (int i = 2; i < no; i++)
    {
        if(no%i==0){
            flag=0;
        }
    }
    if(flag){
        return 1;
    }else{
        return 0;
    }
}