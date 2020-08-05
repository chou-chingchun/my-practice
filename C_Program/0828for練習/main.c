#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,b;
	/*printf("請輸入一個整數:");
	scanf("%d",&b);*/
	for(a=1;a<=10;a=a+1)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}		
	}
	return 0;
}
