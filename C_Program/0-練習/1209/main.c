/*�q��L��J�Y�Z�ǥͬY���Ҫ����Z�Ψ�Ǹ��]�Z�ŤH�Ƴ̦h40�H�A����H�ƥ���L��J�^�A
��X�ӯZ�̰����M�̧C���Ψ�ǥ;Ǹ��F�ÿ�X�ӯZ�ӽҵ{���`���M�������C�нs�g�{���C*/

#include <stdio.h>
#include <stdlib.h>
void scangrade(int);
void sortgrade(int);
int main()
{
	int people=0;//�Z�ŤH�� 
	int i=0,j=0;
	int* n;
	int sum=0,average=0;//�`�M�Υ��� 
	do
	{
		printf("�п�J�Z�ŤH��:");//��J�Z�ŤH�� 
	    scanf("%d",&people);
	    if(people>40)
	    {
	    	printf("�Э��s��J\n");
		}
		
	}while(people>40);
	int grade[people];//�s����ƪ��}�C 
	for(i=0;i<people;i=i+1)
	{
		printf("�п�J%d�즨�Z:",i+1);//��J���Z 
		scanf("%d",&grade[i]);
	}
	for(i=0;i<people;i=i+1)
	{
		n[i]=grade[i];
	}
	for(i=0;i<people;i=i+1)//�N���ƱƧ� 
	{
		for(j=0;j<people-1;j=j+1) 
		{
			if(grade[j]>grade[j+1])
			{
				int a=grade[j];
			    grade[j]=grade[j+1];
		 	    grade[j+1]=a;				
			}
		}
		
	}
	
	for(i=0;i<people;i=i+1)
	{
		printf("%d ",grade[i]);
		sum=sum+grade[i];//�[�`��J������ 
	}
	printf("\n");
	average = sum/people;
	printf("�̧C��:%d\n",grade[0]);//�Ĥ@�ӼƦr���̤p�� 
	printf("�̰���:%d\n",grade[people-1]);//�̫�@�ӼƦr���̤j�� 
	printf("�`��:%d\n",sum);
	printf("������:%d\n",average);
	return 0;
}

