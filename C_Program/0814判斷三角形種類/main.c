#include <stdio.h>
#include <stdlib.h>

int main()
{
	int side1,side2,side3,t;
	printf("�п�J�T���ΤT��:");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1>=side2) //�p�Gside1>=side2,���ƭȹ�� 
	{
		t=side1;
		side1=side2;
		side2=t;
	}
	if(side1>=side3) // �Gside1>=side3,���ƭȹ�� 
	{
		t=side1;
		side1=side3;
		side3=t;
	}
	if(side2>=side3) //�p�Gside2>=side3,���ƭȹ��  
	{
		t=side2;
		side2=side3;
		side3=t;
	}
	printf("%d%d%d \n",side1,side2,side3); //�L�X�ثeside1.side2.side3���O�Ʀh�ּƭ� 
	//side1 <= side2 <= side3 
	if(side1==side3 )
	{
		printf("�o�O���T����\n");
	}
	else if(side1==side2 || side2==side3 )
	{
		printf("�o�O���y�T����\n");
	}
	else if(side1*side1+side2*side2==side3*side3)
	{
		printf("�o�O�����T����\n");
	}
    else
    {
    	printf("�o�O�@�몺�T����\n");
	}
		
	
	return 0;
} 
