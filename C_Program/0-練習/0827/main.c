//���@�禡��x<0��y=1�A��x>0�ɡAy=3�A��x=0��y=5�A�{���]�p�A�q��L��J�@��x�ȡA��Xy�ȡC 
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int x,y;
	printf("�п�JX:");
	scanf("%d", &x);
	if(x<0){y=1;}
	else if(x>0){y=3;}
	else {y=5;}
	
	printf("y=%d",y);
	return 0;
}
