#include <stdio.h>
#include <stdlib.h>
void print_star(int);
void print_triangle(int);
int main()
{
	int n;
	printf("½Ð¿é¤Jn=");
	scanf("%d",&n);
	print_triangle(n);
	return 0;
} 

void print_triangle(int n)
{
	int i;
	for(i=1;i<=n;i=i+1)
	{
		print_star(i);
		printf("\n");
	}
	
}

void print_star(int i)
{
	int j;
    for(j=1;j<=i;j=j+1)
	{
		printf("*");
	}
	return;
}
