//���@�Ӥ��ƧǦC�G2/1�A3/2�A5/3�A8/5�A13/8�A21/13�K�K�{���]�p�D�o�ӧǦC���e20�����M�C
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,i=2,j=1,sum=0,x=0;
	for(a=1;a<=20;a=a+1)
	{
		sum=sum+i/j;
		x=i;//x=2
		i=i+j;//j=3
		j=x;//j=2
	}
	printf("%f",sum);
	return 0;
}

