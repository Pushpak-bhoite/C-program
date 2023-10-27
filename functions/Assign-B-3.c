#include<stdio.h>
int main(){
    int duck(int);      //declaration
    int no;
    printf("Enter No\n");
    scanf("%d",&no);
    int ans = duck(no);     //calling 
    if (ans){
        printf("\tDuck");
    }else{
        printf("\tNot");
    }
    
}

int duck(int no){     //fun defintion
    int rem,flag=0;
    while(no){
        rem=no%10;
        no=no/10;
        if(rem==0){
            flag=1;
        }
    }
    if(flag){
        return 1;
    }else{
        return 0;
    }
}