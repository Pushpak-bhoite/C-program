#include<stdio.h>
int main(){
    void *ptr;
    int a=100;
    float b=5.4f;
    ptr=(int*)&a;
    printf("\n Value of A is %u\n",*(int*)ptr);
    ptr=(float*)&b;
    printf("\n Value of A is %f\n",*(float*)ptr);

}