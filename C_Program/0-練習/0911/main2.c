/*�ΰj�骺��k�c�y�@��5��5�C���G���}�C�A
�ϥD�﨤�u�W���ܼƬ�1�A�䥦��0�A�ñN�}�C���Ҧ���������C��ܥX�ӡC*/
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
