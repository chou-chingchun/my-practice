/*用迴圈的方法構造一個5行5列的二維陣列，
使主對角線上的變數為1，其它為0，並將陣列中所有項按行按列顯示出來。*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n"); 
	}
	
	return 0;
}
