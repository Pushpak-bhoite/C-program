//check no spy or not
#include <stdio.h>
void spy(int);
int main()
{
    int ans, no = 22; //1241,22
     spy(no);
    
}
int sum=0,p=1;
void spy(int no)
{
    if (no)
    {
        int rem = no % 10;
        no = no / 10;
        sum=sum+rem;
        p=p*rem;
        spy(no);
    }else{
        if (sum==p)
        {
        printf("spy ");
        }else{
        printf("Not ");
        }
        
    }

}