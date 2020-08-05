#include <stdio.h>
#include <stdlib.h>

void f(int [10]);
int main()
{
	int v[10]={0};
	f(v);
	return 0;
}
void f(int v[10])
{
	printf("size of int is:%zu\n",sizeof(int));
	printf("size of v[0] is:%zu\n",sizeof(v[0]));
	printf("size of v is:%zu\n",sizeof(v));
	printf("lenght of v is:%zu\n",sizeof(v)/sizeof(v[0]));
	
}
