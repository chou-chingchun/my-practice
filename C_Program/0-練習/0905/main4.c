//�q��L�W��J10�ӼơA�D�䥭����
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,average,cout,total=0;
	do
	{
		printf("�п�J:");
		scanf("%d",&a);
		total=total+a;
		cout=cout+1;
	}while(cout<=10);
	average = total/cout;
	printf("�����O:%d",average);
	
	
	return 0;
}
