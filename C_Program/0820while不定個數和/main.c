#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,sum=0,count=0,average=0;
	while(sum==0 || a!=0)
	{
		printf("�п�J�Ʀr:");
	    scanf("%d",&a);
		sum=sum+a;
		count=count+1;
	}
	average=sum/(count-1);
	printf("�`�X��:%d\n",sum);
	printf("�`�@�[�F%d�ӼƦr\n", count);
	printf("������%d\n",average);
	
		
	return 0;
}
