#include <stdio.h>
#include <stdlib.h>

void print(int (*q)[3]);
int main()
{
	int v[]={1,2,3};
	print(&v);
	return 0;
} 

void print(int (*q)[3])
{
	int i;
	for(i=0;i<sizeof(*q)/sizeof((*q)[0]);i=i+1)
	{
		printf("%d\n",(*q)[i]);
	}
	printf("\n");
}
