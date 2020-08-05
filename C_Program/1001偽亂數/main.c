#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i;
	unsigned int next=1;
	int rand;
	for(i=1;i<=5;i=i+1)
	{
		next=next*11035125245+12345;
		rand=(unsigned int)(next/65535)%32768;
		printf("%u\n",rand);
	}
	
	return 0;
}
