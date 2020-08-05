#include <stdio.h>
#include <stdlib.h> 


int main()
{
	int a=17;
	int* c;
	*c=&a;
	printf("a=%d\n",a);//17
	printf("c=%d\n",*c);//17
	
	/**c=*c+3;
	printf("a=%d\n",a);//17
	printf("c=%d\n",*c);//20
	
	a=a+5;
	printf("a=%d\n",a);//22
	printf("c=%d\n",*c);//20*/ 
	
	return 0;
}
