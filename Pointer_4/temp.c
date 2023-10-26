//pravin sir odd evn with sorted 
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *nptr;// read and store 5 numbers
	int *eptr;// even numebr
	int *optr;// odd number
	int n,i,j;
	int eIndex=0,oIndex=0;
	printf("\n Enter size ");
	scanf("%d",&n);
	nptr=(int *)calloc(sizeof(int),n);
	printf("Ente  numbers");
for(i=0;i<n;i++)
	   {
	   	scanf("%d",(nptr+i));
	   	//scanf("%d",&nptr[i]);
	   }
	   printf("\n array elements are :\n");
	   for(i=0;i<n;i++)
	   {
	   	printf(" %d",*(nptr+i));	   	
	   }
	   eptr=(int *)calloc(sizeof(int),n);
	   optr=(int *)calloc(sizeof(int),n);
for(i=0;i<n;i++)
          {
          	if(nptr[i]%2==0)
          	  {
          	  	eptr[eIndex]=nptr[i];
          	  	eIndex++;
				}
				else
				  {
				  	optr[oIndex]=nptr[i];
				  	oIndex++;
				  }
		  }
printf("\n Even array elements are");
        for(i=0;i<eIndex;i++)
             {
             	printf(" %d",eptr[i]);
			 }
		 printf("\n odd array elements are");
        for(i=0;i<oIndex;i++)
             {
             	printf(" %d",optr[i]);
			 }
for(i=0;i<eIndex;i++)
			    {
			    	for(j=i+1;j<eIndex;j++)
			    	   {
			    	   	  if(eptr[i]>eptr[j])
			    	   	  {							 
			    	   	   int temp=eptr[i];
			    	   	    eptr[i]=eptr[j];
			    	   	    eptr[j]=temp;
			    	      }
					   }
				}
pravin gaikwad11:58 AM
for(i=0;i<oIndex;i++)
			    {
			    	for(j=i+1;j<oIndex;j++)
			    	   {
			    	   	  if(optr[i]>optr[j])
			    	   	  {							 
			    	   	   int temp=optr[i];
			    	   	    optr[i]=optr[j];
			    	   	    optr[j]=temp;
			    	      }
					   }
				}
			 j=0;
for(i=eIndex;i<n;i++)
			 {
			 	eptr[i]=optr[j];
			 	j++;
			 }
			 free(nptr);
			 nptr=eptr;
			  printf("\n #### array elements are :\n");
	   for(i=0;i<n;i++)
	   {
	   	printf(" %d",*(nptr+i));	   	
	   }
	return 0;
}