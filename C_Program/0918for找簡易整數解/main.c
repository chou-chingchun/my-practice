#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	for(x=1;x<=30;x=x+1)
	{
		for(y=1;y<=30;y=y+1)
		{
			if(x+y==30 && x*y==221 && x<=y)
			{
				printf("%d %d",x,y);
				
			}
		}
	
	}
	
	
	return 0;
} 
