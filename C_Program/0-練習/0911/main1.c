//���@�Ӥ��ƧǦC�G2/1�A3/2�A5/3�A8/5�A13/8�A21/13�K�K�{���]�p�D�o�ӧǦC���e20�����M�C
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float i=2,j=1,cont=0,sum;
	for(cont=1;cont<=20;cont=cont+1)
	{
		int x;
		sum=sum+i/j;
		x=i;
		i=i+j;
		j=x;
	  	
	}
	printf("�`�X��:%f",sum);
	return 0;
}
