#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input, output;
	printf("please enter:");
	scanf("%c",&input);
	output = input + 32;
	printf("the answer is %c\n",output);
	
	return 0;
} 
