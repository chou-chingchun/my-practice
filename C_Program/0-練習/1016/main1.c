/*�q��L��J30�W�ǥͪ����Z��ơA�D�䤤���̰����B�̧C���M�������C
�]���ܡG�ΰ}�C�s���Z��ơ^*/ 
#include <stdio.h>
#include <stdlib.h>
int max(int n[10]);
int min(int n[10]);
int avg(int n[10]);
int main() 
{
	int i;
	int total=0;
	int n[10]={0};
	for(i=1;i<=10;i=i+1)
	{
		
		printf("�п�J��%d��ǥͦ��Z:",i);
		scanf("%d",&n[i-1]);
	}
	printf("%d \n",max(n));//�̰��� 
	printf("%d \n",min(n));//�̧C�� 
	printf("%d \n",avg(n));//������ 
	return 0;
}
int max(int n[10])
{
	int i,max;
	max=n[0];//����̤j�Ȱ��]��n[0] 
    for(i=1;i<10;i=i+1)
	{
		if(n[i]>=max)
		{
			max=n[i];
		}
	}
	return max;
}
int min(int n[10]) 
{
	int i,min;
	min=n[9];//����̤p�Ȱ��]��n[0] 
	for(i=8;i>=0;i=i-1)
	{
		if(n[i]<min)
		{
			min=n[i];
		}
	}
	return min;
}
int avg(int n[10])
{
	int i,total=0,avg;
	for(i=0;i<10;i=i+1)
	{
		total=total+n[i];//�[�` 
	}
	//printf("%d,%d\n",total,i);
	avg=total/i;
	return avg; 
}


