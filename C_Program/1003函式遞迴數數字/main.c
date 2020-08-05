#include <stdio.h>
#include <stdlib.h>

void count(int);
int main() 
{
	count(1);
	return 0;
}

void count(int i)
{
	if(i<=10)
	{
	    count(i+1);
		printf("%d\n",i);
		
	}
}
