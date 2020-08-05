#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;//陣列編號
	int n[10]={0};
	printf("請輸入10個整數:");
	for(i=0;i<10;i=i+1)
	{
		scanf("%d",& n[i]);
	} 
	int low,high;
	do
	{		
 	    printf("請輸入下界及上屆:");
	    scanf("%d %d",&low,&high);
	    if(low==0 && high==0)
	    {
	        break;	
	    }
	    printf("答案是:");
	    for(i=0;i<10;i=i+1)
	    {
		
		    if(n[i]>low && n[i]<high)
		    {
		 	    printf("%d  ",n[i]);
		    }
	    }
		
	}while(low!=0 && high!=0);
	
	
	return 0;
} 
