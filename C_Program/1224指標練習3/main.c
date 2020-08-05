#include <stdio.h>
#include <stdlib.h>
void print(int* );
int main()
{
	int a[5]={1,10,100,1000,10000};
	//int* address;
	//address=&a;
	//printf("%d\n",*address);
	print(a);
	return 0;
}
void print(int* a)
{
	int i;
	for(i=0;i<5;i=i+1)
	{
		printf("%d\n",a[i]);
		a[i]=a[i]+1;
	}
	for(i=0;i<5;i=i+1)
	{
		printf("%d\n",a[i]);
	}

	
} 
