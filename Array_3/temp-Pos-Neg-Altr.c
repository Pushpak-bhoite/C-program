// Code by ganesh
#include<stdio.h>
int main(){
	int i,j,n,temp;
	printf("Enter size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements in array[]:",n);
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	
	for(i=1;i<n-1;i++){
		if(a[i-1]<0 && a[i]<0){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	   printf("%d ",a[i]);
	
}