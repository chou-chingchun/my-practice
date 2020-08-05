#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count=9;
	int* countaddr=&count;
	printf("%d\n",count);
	printf("%d\n",countaddr);
	printf("%d\n",&count);
	return 0;
}
