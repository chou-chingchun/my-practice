/*��{�q��L��J��Ӧr��A���O�s�J��Ӥ��P���r���}�C���F
�N��Ӧr��s�u���@�Ӧr��A�æC�L��X�s�u�᪺��Ӧr���C*/ 

#include <stdio.h>
#include <stdlib.h>


int main()
{
	char a[6];
	char b[6];
	int i;
	printf("�п�J�Ĥ@�Ӧr���}�C:");
	for(i=0; a[i]!='\0' ;i=i+1)
	{
		scanf("%c",&a[i]);
	}
	printf("�п�J�ĤG�Ӧr���}�C:");
	for(i=0; b[i]!='\0' ;i=i+1)
	{
		scanf("%c",&b[i]);
	}
	for(i=0; a[i]!='\0' ;i=i+1)
	{
		printf("%c",a[i]);
	}
	for(i=0; b[i]!='\0' ;i=i+1)
	{
		printf("%c",b[i]);
	}
	return 0;
}
