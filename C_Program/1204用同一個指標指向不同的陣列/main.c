#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* numbers=0;//產生一個指標的位置儲存目前輸入的數 
	int length=0;//陣列長度計數用 
	int input=0;//輸入的變數 
	int i;//計數用 
	
	printf("請輸入陣列大小:");
	while(1)
	{
		scanf("%d",&input);
		if(input == 0)
		break;
		int* larger=malloc(sizeof(int)*(length+1));//產生一個大一格的陣列 
		for(i=0;i<length;i=i+1)
		{
			larger[i]=numbers[i];//把舊的陣列複製新的 
		}
		free(numbers);
		numbers=larger;//把numbers設成最新的陣列 
		numbers[length]=input;//最後一個數值是新輸入的input 
		length++;		
	}
	printf("number:");
	for(i=0;i<length;i++)
	{
		printf("%d ",numbers[i]);
	}
	printf("\n");
	
	return 0;
}
