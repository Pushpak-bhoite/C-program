// why array start with Zero(0)
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    // when we want to print array from starting index ,then formulae is:
    for (int i = 0; i <= 5; i++)
    {
        printf("  %d ",&a[0]+(i*2));

    }
    
        printf("\n 0 = %d  1 = %d 2 = %d 2 = %d ",&a[0],&a[1],&a[2],&a[3]);
        
}