/*�H����J�Y�z�Ӿǥͪ��魫�A�H��J�t�Ʃιs�����A
���O�D�̭��M�̻����魫�A�íp�⥭���魫�C*/
#include <stdio.h>
#include <stdlib.h>
 void bubby(int [],int);
int main()
{
	int people=0,i=0;
	printf("�п�J�ǥͤH��:");
	scanf("%d",&people);
	int kg[people];
	do
	{
		printf("�п�J��%d��ǥ��魫:",i+1);
		scanf("%d",&kg[i]);
		if(kg[i]==0 || kg[i]<0 || (i+1)==people)
		break;
		i=i+1;
	}while(1);
	printf("people=%d\n",people);
	printf("kg[people]=%d\n",kg[people-1]);
	bubby(kg,people);
	return 0;
}
void bubby(int kg[],int people)
{
	int i,j,x;
	for(i=0;i<people-2;i=i+1)
	{
		for(j=0;j<people-3;j=j+1)
		{
			if(kg[j]>kg[j+1])
			{
				x=kg[j];
				kg[j]=kg[j+1];
				kg[j+1]=x;
			}
		}
	}
	printf("�̤j�ȬO:%d\n",kg[people-1]);
	printf("�̤p�ȬO:%d\n",kg[0]);
}

