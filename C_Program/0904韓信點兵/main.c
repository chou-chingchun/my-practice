//���H�I�L��e�T�p(�j) 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,cout=0;
	printf("�п�J�U��:");
	scanf("%d",&b);
	printf("�п�J�W��:");
	scanf("%d", &c);
	for(a=c;a>=b;a=a-1)
	{
		
		if(a%3==2 && a%5==3 && a%7==2)
		{
			cout=cout+1;
			if(cout==3)
			{
				printf("%d\n",a);
	        }
		}
		
		
	} 
	
	
	
	return 0;
} 

/*int main()
{
	int a,b,c,cout=0;
	printf("�п�J�U��:");
	scanf("%d",&b);
	printf("�п�J�W��:");
	scanf("%d", &c);
	for(a=c;a>=b;a=a-1)
	{
		if(a%3==2 && a%5==3 && a%7==2)
		{
			
			printf("%d\n",a);
			cout=cout+1;
			if(cout==3)
			{
				break;
	        }
		}
		
		
	} 
	
	
	
	return 0;
} */
