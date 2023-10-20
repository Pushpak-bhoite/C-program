#include<stdio.h>
int main(){
        int a[5]={2,2,3,4,3},*ptr;
        ptr=a;
        // printf("enter no");
        // for (int i = 0; i < 5; i++)
        // {
        //     scanf("%d",&*(ptr+i));
        // }

        for (int i = 0; i < 5; i++)
        {
            for (int j = i+1; j < 5; j++)
            {
                if(*(ptr+i)>*(ptr+j)){
                    int t=*(ptr+i);
                    *(ptr+i)=*(ptr+j);
                    *(ptr+j)=t;
                }
            }
            
        }
        int cnt=1,flag=1;
        for (int i = 0; i < 5; i++)
        {

        if(*(ptr+i) == *(ptr+i+1)){
            cnt++;
            if (cnt>2)
            {
                printf("Majority Enlement is %d",*(ptr+i));
                flag=0;
                break;
            }
        }else{
            cnt=1;
        }
            
        }
        if (flag)
        {
            printf("No Majority");
        }
        

        
        
}