#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* numbers=0;//���ͤ@�ӫ��Ъ���m�x�s�ثe��J���� 
	int length=0;//�}�C���׭p�ƥ� 
	int input=0;//��J���ܼ� 
	int i;//�p�ƥ� 
	
	printf("�п�J�}�C�j�p:");
	while(1)
	{
		scanf("%d",&input);
		if(input == 0)
		break;
		int* larger=malloc(sizeof(int)*(length+1));//���ͤ@�Ӥj�@�檺�}�C 
		for(i=0;i<length;i=i+1)
		{
			larger[i]=numbers[i];//���ª��}�C�ƻs�s�� 
		}
		free(numbers);
		numbers=larger;//��numbers�]���̷s���}�C 
		numbers[length]=input;//�̫�@�ӼƭȬO�s��J��input 
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
