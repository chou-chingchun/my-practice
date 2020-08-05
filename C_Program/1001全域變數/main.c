#include <stdio.h>
#include <stdlib.h>

//int k=0;
int cout(void);
int main()
{
	int i=0;
	for(i=1;i<=5;i=i+1)
	{
		printf("%d\n",cout());
	}

	
	
} 

int cout(void)
{
	static int k=0;
	k=k+1;
	return k;
}
