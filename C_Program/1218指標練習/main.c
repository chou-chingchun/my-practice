#include <stdio.h>
#include <stdlib.h>
void printp(int []);
void printq(int []);
int main()
{
	//int a=3,b=5;
	int a[3]={1,2,3},b[5]={5,6,7,8,9};
	int* p;
	int* q;
	int i;
	p=&a;
	q=&b;
	printp(p);
	printf("\n");
	printq(q);
	printf("\n");
	
	
	
	
	/**p=8;
	*q=10;
	printf("after a=%d\n",a);
	printf("after b=%d\n",b);*/
		
	return 0;
} 
void printp(int p[])
{
	int i;
	for(i=0;i<3;i=i+1)
	{
		printf("before a=%d ",p[i]);
	}
	
}
void printq(int q[])
{
	int i;
	for(i=0;i<5;i=i+1)
	{
		printf("before b=%d ",q[i]);
	}
	
}
