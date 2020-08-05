#include <stdio.h>
#include <stdlib.h>

void print(int** ,int,int);
int main()
{
	int v[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int* p[3]={v[0],v[1],v[2]};
	print(p,3,3);
	return 0;
}
void print(int **v,int height,int width)
{
	int i,j;
	for(i=0;i<height;i=i+1)
	{
		for(j=0;j<width;j=j+1)
		{
			printf("%d ",v[i][j]);
		}
		printf("\n");
	}
}
