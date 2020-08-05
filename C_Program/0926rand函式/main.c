#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	srand(time(0));
	for(i=1;i<=5;i=i+1)
	{
		printf("%d\n",rand());
	}
	return 0;
	
} 
