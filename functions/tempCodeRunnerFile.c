#include<stdio.h>
int i=0;
int arr[]={4,1,6,6,2};
int max=0,min=0;
void show(int arr[]){
    if (i<5)
    {   
        // printf("hi");
        if(max<arr[i])
        {
            max=arr[i];
        }else{
            min=arr[i];
        }
        i++;
        show(arr);
    }else{
        printf("Max:%d",max);
        printf("\nMin:%d",min);
    }

}
int main(){

    
    show(arr);
    return 0;
}