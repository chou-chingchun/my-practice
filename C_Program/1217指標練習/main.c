#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=5;
	int* p;
	p=&a;
	printf("%d\n",*&a);
	printf("%d\n",*p);
	return 0;
 } 
