#include<stdio.h>
int main(){
    int no=8208,sum=0,cnt=1,rem,i=1;
    int temp = no;
    while(no=no/10){
        cnt++;
    }
    no =temp;
    while(i<=cnt){

        rem=no%10;
        no=no/10;
        int p=1,j=1;
        while (j<=cnt)
        {
            p=p*rem;
            j++;
        }
        i++;
        sum=sum+p;
        
    }
    if(sum==temp){
        printf("Yes ");
    }else{
        printf("NO ");

    }

}