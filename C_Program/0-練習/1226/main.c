/*��J��Ӿ�ơA�Q�Ϋ����ܼƧ@���禡�޼ơA
�{���]�p��{��Ƥ����\��A�ñN�洫�᪺��ƭ��s��X�C */ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,x;
	int* add_a=&a;
	int* add_b=&b;
	printf("�п�Ja=");
	scanf("%d",&a);
	printf("�п�Jb=");
	scanf("%d",&b);
	x=*add_a;
	*add_a=*add_b;
	*add_b=x;
	printf("�洫��a=%d\n",*add_a);
	printf("�洫��b=%d\n",*add_b);
	printf("a���O�����m:%d\n",add_a);
	printf("b���O�����m:%d\n",add_b);
	
	
	
	return 0;
} 
