#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=1,N=0;
	do
	{
		printf("�п�J�@�ӥ����:");
	    scanf("%d",&N);
	    if(N>0)
	    {
		  for(a=1;a<=N;a=a+1)
	      {
		     if(N%a==0)
		    {
			  printf("%d\n",a);
		    }
	      }
	    }
	    else
	    {
		    printf("��J���~�Э��s��J\n");
	    }
	
	    
	}while(N<=0);
	
	
	return 0;
} 
