#include <stdio.h>
#include<stdlib.h>

int main()
{
	int number=0,a,b;
	printf("�п�J�C��:");
	scanf("%d", &a);
	printf("�п�J����:");
	scanf("%d", &b);
	number=a;
	while(number<=b)
	{
		printf("%d\n",number);
		number=number+1;
	}
	
	
	
	return 0;
} 
