#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arrayrand(int v[10]);
void arrayprint(int v[10]);
int arraymax(int v[10]);
int main()
{
	int v[10]={0};
	arrayrand(v);//�I�s���Ͷüƪ��禡 
	arrayprint(v);//�I�s�L�X�üƪ��禡 
	printf("%d \n",arraymax(v));//�I�s��̤j�Ȫ��禡 
	return 0;
}

void arrayrand(int v[10])
{
	srand(time(0));//���Ͷü� 
	int i,j,counter[10]={0};
	for(i=0;i<10;i=i+1)
	{
		do
		{
			v[i]=rand()%10;//�N�üƦs�b�}�C�� 
		}while(counter[v[i]]!=0);//�ˬd�O�_����  
		counter[v[i]]++;//�N�X�{���Ʀr������++�A�X�{5�N��counter[5]++ 
	}
}

void arrayprint(int v[10])
{
	int i;
	for(i=0;i<10;i=i+1)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
}

int arraymax(int v[10])
{
	int i,max;
	max=v[0];
	for(i=1;i<10;i=i+1)
	{
		if(v[i]>max)
		{
			max=v[i];
		}
	}
	return max;
}
