#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;//�}�C�s��
	int n[10]={0};
	printf("�п�J10�Ӿ��:");
	for(i=0;i<10;i=i+1)
	{
		scanf("%d",& n[i]);
	} 
	int low,high;
	do
	{		
 	    printf("�п�J�U�ɤΤW��:");
	    scanf("%d %d",&low,&high);
	    if(low==0 && high==0)
	    {
	        break;	
	    }
	    printf("���׬O:");
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
