/*���@�Ӥ��ƧǦC�G2/1�A3/2�A5/3�A8/5�A13/8�A21/13�K�K
�{���]�p�D�o�ӧǦC���e20�����M�C*/

#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float x=2,y=1,a,sum;
	int cout;
	for(cout=1;cout<=20;cout=cout+1)
	{
		sum=sum+x/y;
		a=x;//�NX�s�iA 
		x=x+y;//�s��X 
		y=a;//�s��Y 
	}
	printf("%f",sum);
	
	return 0;
}
