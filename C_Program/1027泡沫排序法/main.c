#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,t,n[5]={0};//�p��
	printf("�п�J5�ӥ����:");
	for(i=1;i<=5;i=i+1)//��J���ӼƦr�A�s�J�}�C 
	{
		scanf("%d",&n[i-1]);
	} 
	/*for(i=0;i<5;i=i+1)//�L�X����J���}�C 
	{
		printf("%d ",n[i]);
	} 
	printf("\n");*/ 
	for(i=0;i<4;i=i+1)//�N�}�C�q�p�ƨ�j 
	{
		for(j=0;j<4;j=j+1)
	    {
		    if(n[j]>n[j+1])
		    {
			    t=n[j];
			    n[j]=n[j+1];
			    n[j+1]=t;
		    }
	    }
	}
	
	for(i=0;i<5;i=i+1)//�L�X�Ƨǫ᪺�}�C 
	{
		printf("%d ",n[i]);
	}
	
	return 0;
} 
