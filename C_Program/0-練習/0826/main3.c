//�s�g�@�ӵ{��,�q4�Ӿ�Ƥ���X�̤p����,����ܦ��ơC
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,b,c,d,small;
	printf("�п�J4���ܼ�:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	small=a;
	if(small>b){small=b;}
	if(small>c){small=c;}
	if(small>d){small=d;}
	printf("�̤p�ȬO:%d",small);
	
	return 0;
}
