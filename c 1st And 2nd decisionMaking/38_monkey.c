//this question is present in app ,que 14
#include<stdio.h>
int main(){
    int n=20,k=2,j=3,m=12,p=12;
    printf("Enter values \n");
    // scanf("%d")
    int sm1 = (m/k)+(p/j);
    int rm = m%k;
    int rp = p%j;

    n=sm1-n;

    if((rm < k && rm >0 ) || (rp < j && rp >0)) {
        sm1--;
    }
   printf("sm1 \t %d",sm1);
    

}