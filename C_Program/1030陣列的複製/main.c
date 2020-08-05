#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printarray(int [10]);
int main()
{
	srand(time(0));
	int i,n[10]={0},v[10]={0};
	for(i=0;i<10;i=i+1)
	{
		n[i]=rand()%100;
	}
	
	for(i=0;i<10;i=i+1)
	{
		v[i]=n[i];
	}
	printarray(n);
	printarray(v);
	/*for(i=0;i<10;i=i+1)
	{
		printf("%d ",n[i]);
	}
	printf("\n");
	for(i=0;i<10;i=i+1)
	{
		printf("%d ",v[i]);
	}*/

	return 0;
} 

void printarray(int t[10])
{
	int i;
	for(i=0;i<10;i=i+1)
	{
		printf("%d ", t[i]);
	}
	printf("\n");
}
