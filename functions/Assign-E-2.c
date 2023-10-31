#include<stdio.h>
int hcf(int ,int );
int main(){
    int a=10,b=15;
    int ans=hcf(a,b);
    printf("%d",ans);
}

int i=2,flag=1,cnt=0;
int hcf(int a,int b){
    if (flag)
    {
        if(a%i==0 && b%i==0){
            flag=0;
            return i;
        }
        i++;
        hcf(a,b);
    }
}