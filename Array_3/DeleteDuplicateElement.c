// delete duplicate element by sir;
#include<stdio.h>
int main()
{
  int a[5]={5,1,9,5,9};
  int n=5;
   int i,j,k;
for(i=0;i<n;i++)                 
    {
	    for(j=i+1;j<n;j++)
	    {
	         if(a[i]==a[j])     //check same element or not 
	         {
	             for(k=j;k<n-1;k++)   
	             {
	             	a[k]=a[k+1];
				 }
	             n--;
	             
	             j--;
	         }
	    }
    }
    
	printf("\n After remove duplicate elements Array\n");
	for(i=0;i<n;i++)
	{
	     printf("\t %d",a[i]);

	}
}