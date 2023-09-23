// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary < 10000: HRA 20%, DA 80%
// Basic Salary <= 20000: HRA 25%, DA 90%
// Basic Salary> 20000: HRA 30%, DA = 95%
#include<stdio.h>
int main(){
    int bsal;
    float gross,hra ,da;
    printf("Enter the BS\t:");
    scanf("%d",&bsal);

    // suppose bsal=2000
    if(bsal<=10000){
        // hra=bsal*20/100;
        // da=bsal*80/100;
        // gross=bsal+da+hra;
        //instead of this 

        gross =bsal*(100+20+80)/100;
    }else if (bsal<=20000)
    {
                //  25per 90per
        gross=bsal*(100+25+90);
    }else if (bsal>20000)
    {
        gross=bsal*(100+30+95);
    }
    printf("Gross is %f",gross);
       
}