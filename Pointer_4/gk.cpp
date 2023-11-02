#include<stdio.h>
int i=0;
	
	int max=0;
void show(int arr[])
{
	static int min=arr[0];
    if (i<5)
    {   
        // printf("hi");
        if(max<arr[i])
        {
            max=arr[i];
        }if(min>arr[i]){
            min=arr[i];//1
        }
        i++;
        show(arr);
    }else{
        printf("Max:%d",max);
        printf("\nMin:%d",min);
    }

}
int main(){
	int arr[]={3,2,1,4,7};
    show(arr);
    return 0;
}
