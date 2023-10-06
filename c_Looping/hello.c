#include<stdio.h>
int main(){
	int i,j,ch;
	for(i=1;i<=5;i++){
		ch=64;
		for(j=1;j<=(2*i)-1;j++){
			if(j>i){
				printf("%c",--ch);
			}else{
			printf("%c",++ch);	
			}
			
		}
		printf("\n");
	}
	return 0;
}