#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, total;
	printf("how many people:");
	scanf("%d", &number);
	total = 300 * number;
	
	if(total >= 3000)
	{
		total = total * 0.8;
	
	}
	printf("total is:%d", total);
	
	return 0;
} 
