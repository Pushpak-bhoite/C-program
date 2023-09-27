#include<stdio.h>
int main(){
    int no,i=1,cnt=0;
    printf("Enter No\t");
    scanf("%d",&no);
    while(i<=no){
       if(no%i==0){
            cnt++;
        }
        i++;
    }
    if(cnt<=2){
        printf("Prime");
    }else{
        printf("Non-Prime");

    }
}