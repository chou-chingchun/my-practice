#include <stdio.h>
#include <stdlib.h>


int main()
{
	char str[11]="hello world";
	printf("�j�p��:%zu \n",sizeof(str));
	printf("���׬�:%d \n",len_str(str));
	return 0;
}
int len_str(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i=i+1;
	}
	return i;
}
