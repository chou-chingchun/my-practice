#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	const char* source="test";
	char destination[5];
	
	strcpy(destination,source);
	printf("%s",destination); 
	
	return 0;
} 
