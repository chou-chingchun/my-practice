#include <stdio.h>
#include <stdlib.h>

int rand(void);
int main() 
{
	int i;
	for(i=1;i<=5;i=i+1)
	{
		
		printf("%u\n",rand());
	}
	
	return 0;
}

int rand(void)
{
	int rand;
	static unsigned int next=1;
	next=next*11035125245+12345;
    rand=(next/65535)%32768;
    return rand;
}

