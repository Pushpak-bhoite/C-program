#include<stdio.h>
#include<stdlib.h>
struct Player{
	int id;
	char name[90];
	int run;
};
int main(){
	struct Player *p;
	int size,pid;
	printf("\nEnter size of array\n");
	scanf("%d",&size);
	p=(struct Player*)malloc(sizeof(Player)*size);
	for(int i=0;i<size;i++){
		printf("\nenter name id and run of player\n");
		scanf("%s %d %d",&p[i].name,&p[i].id,&p[i].run);
	}
	printf("\nDisplay all palyer records\n");
	for(int i=0;i<size;i++){
	   printf("%s\t%d\t%d\n",p[i].name,p[i].id,p[i].run); 
	}
	printf("\nEnter id of search player record\n");
	scanf("%d",&pid);
	int flag=0;
	for(int i=0; i<size; i++){
		 if(pid==p[i].id){
		 	flag=1;
		 	break;
		 }
	}
	if(flag){
		printf("Player Found");
	}
	else{
		printf("Player Not Found");
	}
	return 0;
}
