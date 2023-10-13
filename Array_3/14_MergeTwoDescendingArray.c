// Merging of two sorted Array in Decsending order
#include <stdio.h>
int main()
{
    int a[3] = {1, 3, 5};
    int b[3] = {2, 4, 6};
    int c[6];
    //Merging Of array
    for (int i = 0; i < 6; i++)
    {
        if (i<3)
        {
            c[i] = a[i];
        }else{
            c[i] = b[i-3];
        }
    }
    //Sort in descending
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if(c[i]<c[j]){
                int t = c[i];
                c[i]= c[j];
                c[j]=t;
            }
        }
        
    }
    
    for (int  i = 0; i < 6; i++)
    {
        printf("%d ",c[i]);
    }
    
}

