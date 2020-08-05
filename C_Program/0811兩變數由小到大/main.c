#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number1,number2,old_number1;
	printf("請輸入兩變數:");
	scanf("%d%d",&number1,&number2);
	old_number1 = number1;
	if(number1>number2)
	{
		number1 = number2;
		number2 = old_number1;
	}
	printf("%d、%d",number1,number2 );
	
	
	return 0;
} 
