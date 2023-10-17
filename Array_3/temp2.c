//odd even by ganesh logic

#include<stdio.h>
int main(){
	int a[5],o[5],e[5],i,c=0,b=0;
	printf("Enter array  elements :");
	for(i=0;i<5;i++){
			scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		if(a[i]%2){
			o[i-b]=a[i];
			c++;
		}
		if(a[i]%2==0){
		b++;
		      e[i-c]=a[i];
		  }
	}
	for(i=0;i<5;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
		for(i=0;i<b;i++){
		printf("%d   e",e[i]);
	}
	printf("\n");
		for(i=0;i<c;i++){
		printf("%d  o",o[i]);
	}
	return 0;
}