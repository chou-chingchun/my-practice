/*�q��L��J10�W�ǥͪ����Z��ơA
�����Z�q����C�����ǱƦC�ÿ�X�C�]���ܡG�ΰ}�C�s���Z��ơ^*/ 
#include <stdio.h>
#include <stdlib.h>

void sort(int []);
int main()
{
	int i,n[10]={0};
	
	for(i=1;i<=10;i=i+1)
	{
	    printf("�п�J��%d��ǥͦ��Z:",i);		
		scanf("%d",&n[i-1]);//��J���Z 
	}
	/*for(i=0;i<10;i=i+1)
	{
		printf("%d ",n[i]);//�T�{��J���Z 
	}
	printf("\n");*/ 
	sort(n);
	return 0;
}
void sort(int n[])
{
	int i,j,t;
	for(i=0;i<10;i=i+1)
	{
		for(j=0;j<9;j=j+1)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
			//printf("%d ",n[j]);//�ˬd�C���Ƨǵ��G 
		}
		//printf("%d\n",n[j]);//�ˬd�C���Ƨǵ��G 
	}
	for(i=0;i<10;i=i+1)
	{
		printf("%d ",n[i]);//�Ƨǧ��� 
	}
}
