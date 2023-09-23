//Is no divisible by 5 & 11 means simply is no fuuly divisible by 5(ex no%5==0)

#include<stdio.h>
int main(){
    int no;
        printf("Enter the no ");

    scanf("%d",&no);
    if(no%5==0 && no%11==0){   //
    printf("Yes No is divisible by 5 & 11");
    }else{
    printf("No Not divisible\n");
    printf("no Mod 5==0 \t %d \n",no%5);
        printf("no Mod 11==0 \t %d \n",no%11);
    }
    return 0;
}
