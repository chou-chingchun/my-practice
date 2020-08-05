#include <stdio.h>
#include <stdlib.h>

void addone(int *n)
{
	*n=*n+3;
}
int main()
{
    int a=5;
	addone(&a);
	printf("%d",a);	
	return 0;
}
