#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,sum=0,count=0;
	float average;
	printf("請輸入數字:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("N/A");
	}
	else
	{
		while(sum==0 || a!=0)
	    {	
		    sum=sum+a;
		    count=count+1;
		    printf("請輸入數字:");
	        scanf("%d",&a);
	    }
	average=(float)sum/(count);
	printf("總合為:%d\n",sum);
	printf("總共加了%d個數字\n", count);
	printf("平均為%f\n",average);
	}
	
			
	return 0;
}
