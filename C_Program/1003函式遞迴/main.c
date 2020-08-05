#include <stdio.h>
#include <stdlib.h>

int f(int);
int main()
{
	printf("%d\n",f(0));
	return 0;
	
} 

int f(int i)
{
	if(i==10)
	{
		return i;
	}
	return f(i+1);
}
