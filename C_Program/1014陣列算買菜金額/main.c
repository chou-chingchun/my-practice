#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price[5]={90,75,83,89,71};
	int id,total=0;
	do
	{
		printf("請輸入購買項目:");
		scanf("%d",&id);
		if(id==0)
		    break;
		total = total+price[id-1];
		
	}while(id!=0);
	printf("金額是:%d\n",total);
	
	return 0;
}
