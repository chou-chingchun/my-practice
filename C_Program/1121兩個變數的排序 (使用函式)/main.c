#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a=5,b=3;
	sort(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
void sort(int *a,int *b)
{
	if(*a>*b)
	{
		swap(&*a,&*b);
	}	
}
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;	
}
