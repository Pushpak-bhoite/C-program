//calculate factorial of no
#include<stdio.h>
int main(){
    int fact(int);
    int no;
    printf("Enter No\t");
    scanf("%d",&no);
    int ans=fact(no);

    printf("factorial =%d",ans);
}

int fact(int no){
int p=1;
    for (int  i = no; i > 0; i--)
    {
        p=p*i;
    }
    return p;
}