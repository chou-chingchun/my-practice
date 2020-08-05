#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=2;
	int* address=&a;
	
	printf("a的值:%d\n",a);//a=2
	printf("&a的記憶體位置:%d\n",&a);
	printf("address的值:%d\n",address);
	printf("\n");
	*address=200;
	printf("*address的值:%d\n",*address);
	printf("a的值:%d\n",a);
	printf("address的位置:%d\n",&address);
		
	return 0;
} 
