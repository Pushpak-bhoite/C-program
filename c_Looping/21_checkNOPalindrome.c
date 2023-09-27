#include<stdio.h>
int main(){
    int a=0,b=1,sno=8,t,i=1;
    
    while(i<=10){
        t=a+b;
        printf("%d ",a);
        if(t==sno){
            printf("Yes");
            break;
        }
        a=b;
        b=t;
        i++;
    }
    if(t==sno){
        printf("Yes");
    }else{
        printf("No");

    }

}