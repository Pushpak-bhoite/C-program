#include<stdio.h>
int main(){
    int armstrong(int);        //declaration
    int no;
    printf("Enter No\n");
    scanf("%d",&no);
    int ans = armstrong(no);       //calling
    if (ans){
        printf("\tArmStrong");
    }else{
        printf("\tNot ");
    }
}

int armstrong(int no){     //fun defintion
    int flag=1,sum=0,rem,temp=no,cnt=0;
    while (no)
    {
        no=no/10;
        cnt++;
    }
    printf("%d",cnt);
    no=temp;
    while (no)
    {
        rem=no%10;
        no=no/10;
        int p=1;
        for (int i = 0; i < cnt ; i++)
        {
            p=p*rem;
        }
        sum=sum+p;
    }
    printf("\n%d",sum);
    
    if(temp==sum){
        return 1;
    }else{
        return 0;
    }
}