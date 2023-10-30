#include <stdio.h>
void duck(int);
int main()
{
    int ans, no = 568;
    // ans
     duck(no);
    // if (ans)
    // {
    //     printf("\nNot ");
    // }else{
    //     printf("\nDuck");
    // }
    
}

void duck(int no)
{
    printf(" %d ->",no);
    if (no)
    {
        int rem = no % 10;
        no = no / 10;
        if (rem==0)
        {
            printf("Duck");
        }else{

        duck(no);
        }
        
    }else{
        printf("Not ");
    }

}