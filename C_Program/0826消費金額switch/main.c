#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int total=0,id;
	do
	{
		printf("½Ð¿é¤J¸¹½X:");
		scanf("%d",&id);
		switch(id)
		{
			case 1:total=total+90;break;
			case 2:total=total+80;break;
			case 3:total=total+70;break;
			case 4:total=total+60;break;
			case 5:total=total+50;break;
			case 6:total=total+40;break;
		}
		
		
	}while(id!=0);
	
	printf("total is %d", total);
	
	
	return 0;
} 
