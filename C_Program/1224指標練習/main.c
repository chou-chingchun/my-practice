#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=2;
	int* address=&a;
	
	printf("a����:%d\n",a);//a=2
	printf("&a���O�����m:%d\n",&a);
	printf("address����:%d\n",address);
	printf("\n");
	*address=200;
	printf("*address����:%d\n",*address);
	printf("a����:%d\n",a);
	printf("address����m:%d\n",&address);
		
	return 0;
} 
