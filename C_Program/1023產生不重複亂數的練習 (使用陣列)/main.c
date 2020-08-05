#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int i,n[10]={0},used,j;
	for(i=1;i<=10;i=i+1)
	{
		do
		{
			n[i-1]=rand()%10+1;//²£¥Í¶Ã¼Æ 
			//used=0;
			for(j=1;j<i;j=j+1)
			{
				if(n[i-1]==n[j-1])
				{
					//used=1; 
					break;
				}
			}
		}while(j!=i);
		
		printf("%d  ",n[i-1]);
	}
	printf("\n");
	
	return 0;
}
