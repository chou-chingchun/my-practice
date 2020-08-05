#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ID;
	printf("½Ð¿é¤JID:");
	scanf("%d", &ID);
	switch (ID)
	{
		case 2:
			printf("John\n");
			break;
		case 13:
			printf("Mary\n");
			break;	
		case 25:
			printf("Andy\n");
			break;
		default:
		    printf("not found\n");  	
		
	}
	
	return 0;
}
