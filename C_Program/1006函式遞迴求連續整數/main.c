#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main()
{
	int N;
	printf("�п�J�����N=");
	scanf("%d",&N);
	printf("�`�X��%d",sum(N));
	
	
	
	return 0;
} 

int sum(int N)
{
	if(N==1)
	{
		return 1;
	}
	return sum(N-1)+N;

}
