#include<stdio.h>
int main(){
    int amt;
    printf("Enter Amt : \t");
    scanf("%d",&amt);

    printf("Notes of 500 : %d\n",amt/500);
    amt = amt%500;
    printf("Notes of 200 : %d\n",amt/200);
    amt = amt%200;
    printf("Notes of 100 : %d\n",amt/100);
    amt = amt%100;
        printf("Notes of 50 : %d\n",amt/50);
    amt = amt%50;
        printf("Notes of 20 : %d\n",amt/20);
    amt = amt%20;
        printf("Notes of 10 : %d\n",amt/10);
    amt = amt%10;

        printf("Coins of 5 : %d\n",amt/5);
    amt = amt%5;
    printf("Coins of 2 : %d\n",amt/2);
    amt = amt%2;
    printf("Coins of 1 : %d \n",amt/1);
    
    int notes[]={500,200,100,50,20,10,5,2,1};
    printf("%d",lenghthof(notes));
    // for()

    

    return 0;
}