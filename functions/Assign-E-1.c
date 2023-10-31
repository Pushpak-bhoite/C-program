//calcute LCM
#include<stdio.h>
void lcm(int ,int );
int main(){
    int a=2,b=3;
    lcm(a,b);
}
int flag=1,i=1;
void lcm(int a,int b){
    if(flag){
        if(i%a==0 && i%b==0){

        printf("LCM = %d ",i);
        flag=0;
        // lcm(a,b);
        }
        i++;
        lcm(a,b);
    }

}