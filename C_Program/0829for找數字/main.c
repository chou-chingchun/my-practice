#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
    for(a=1;a<=10;a++)
	{
		if(a==5)
		{
			continue;		    
		}
		printf("%d",a);
	}
	
	
	return 0;
}
