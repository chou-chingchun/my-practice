#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,sum=0,count=0;
	float average;
	printf("�п�J�Ʀr:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("N/A");
	}
	else
	{
		while(sum==0 || a!=0)
	    {	
		    sum=sum+a;
		    count=count+1;
		    printf("�п�J�Ʀr:");
	        scanf("%d",&a);
	    }
	average=(float)sum/(count);
	printf("�`�X��:%d\n",sum);
	printf("�`�@�[�F%d�ӼƦr\n", count);
	printf("������%f\n",average);
	}
	
			
	return 0;
}
