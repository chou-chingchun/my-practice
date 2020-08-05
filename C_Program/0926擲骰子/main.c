#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() 
{
	srand(time(0));
	int i;
	for(i=1;i<=5;i=i+1)
	{
		int dice=rand() %6 + 1;
		printf("%d\n",dice); 
	}
	return 0;
}
