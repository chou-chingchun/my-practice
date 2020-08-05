#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[2]={1,2};
	int b[2]={3,4};
	int c[2]={5,6};
	int* p[3]={a,b,c};
	
	int i,j;
	for(i=0;i<3;i=i+1)
	{
		for(j=0;j<2;i=i+1)
		{
			p[i][j]=0;
		}
	}
	printf("%d\n",p[2][0]);
	return 0;
}
