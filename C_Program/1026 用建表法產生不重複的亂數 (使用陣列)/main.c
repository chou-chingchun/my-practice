//�H������10��1~10���Ʀr�A������ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int i,n,counter[10]={0};//�}�C�Ψӭp��X�{�����Ʀr������ �A�d��O�h�ִN�n�h�j(0~100������10�ӴN�ݭn100) 
	for(i=1;i<=10;i=i+1)
	{
		do
		{
			n=rand()%10+1;
		}while(counter[n-1] != 0);//�Y����0�A�N��Ӷ��������Ʀr�w�g�X�{�L 
		printf("%d ",n);
		counter[n-1]++;
	}
	return 0;
} 
