#include<stdio.h>
int  main(){
    int a = 'A';
    char b = 1;
    for(int i=1; i<=5;i++){
        for (int  j = 1; j <= 5; j++)
        {
            if(i%2==0){
                printf("%d",b);
                b++;
            }else{
                 printf("%c",a);
                a++;
            }
        }
            printf("\n");

        
    }
        printf("\n");

    
   
    
}