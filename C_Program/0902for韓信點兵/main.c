#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("�п�J�U��:");
	scanf("%d",&b);
	printf("�п�J�W��:");
	scanf("%d", &c);
	for(a=c;a>=b;a=a-1)
	{
		if(a%3==2 && a%5==3 && a%7==2)
		{
			printf("%d\n",a);
			break;
		}
		
		
	} 
	
	
	
	return 0;
} 
