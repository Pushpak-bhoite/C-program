#include<stdio.h>
int main(){
    int strong(int);        //declaration
    int no;
    printf("Enter No\n");
    scanf("%d",&no);
    int ans = strong(no);       //calling
    if (ans){
        printf("\tStrong");
    }else{
        printf("\tNot ");
    }
}

int strong(int no){     //fun defintion
    int flag=1,sum=0,rem,temp=no;
    while (no)
    {
        rem=no%10;
        no=no/10;
        int p=1;
        for (int i = rem; i > 0; i--)
        {
            p=p*i;
        }
        sum=sum+p;
    }
    
    if(temp==sum){
        return 1;
    }else{
        return 0;
    }
}