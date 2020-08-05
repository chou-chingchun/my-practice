#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;//°}¦C½s¸¹
	int n[5]={0};
	for(i=0;i<5;i=i+1)
	{
		printf("%d:",i+1);
		scanf("%d",&n[i]);
		
	} 
	do
	{
		printf("Q:");
	    scanf("%d",&i);
	    if(i<=0 || i>5)
	    {
	        break;	
		}	   
	    printf("%d\n",n[i-1]);
		
	}while(i!=0);
	
	return 0;
} 
