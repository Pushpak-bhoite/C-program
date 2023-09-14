#include<stdio.h>
int main(){

    float side1,side2,side3;
    printf("\n ");
    scanf("%f%f%f",&side1,&side2,&side3);
    
    if(side1+side2+side3 == 180){
        printf("\n Valid");
    }else{
        printf("\n Not Valid");
    }
  
  return 0;
}
