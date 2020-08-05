#include <stdio.h>
#include <stdlib.h>
void str_print(char[]);

int main()
{
	char str[]="hello world";
	str_print(str);
	return 0;
}
void str_print(char str[])
{
	int i;
	//for(i=0;str[i]!='\0';i=i+1)
	//{
		printf("%s\n",str);
	//}
}
