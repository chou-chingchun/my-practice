#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price[5]={90,75,83,89,71};
	int id,total=0;
	do
	{
		printf("�п�J�ʶR����:");
		scanf("%d",&id);
		if(id==0)
		    break;
		total = total+price[id-1];
		
	}while(id!=0);
	printf("���B�O:%d\n",total);
	
	return 0;
}
