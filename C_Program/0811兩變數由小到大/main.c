#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number1,number2,old_number1;
	printf("�п�J���ܼ�:");
	scanf("%d%d",&number1,&number2);
	old_number1 = number1;
	if(number1>number2)
	{
		number1 = number2;
		number2 = old_number1;
	}
	printf("%d�B%d",number1,number2 );
	
	
	return 0;
} 
