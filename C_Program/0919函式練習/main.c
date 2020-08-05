#include <stdio.h>
#include <stdlib.h>

int div2(int x)
{
	return x/2;
}

int main()
{
	int N;
	printf("½Ð¿é¤JN:");
	scanf("%d",&N);
	printf("%d",div2(N));
	return 0;
}
