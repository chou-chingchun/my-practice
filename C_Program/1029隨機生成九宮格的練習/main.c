#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(0));
	int i,j;//�p��
	int v[3][3]={0};//�s��ƭ�
	int counter[9]={0};//�p��X�{���� 
	for(i=0;i<3;i=i+1)
	{
		for(j=0;j<3;j=j+1)
		{
			do
			{
				v[i][j]=rand()%10+1;
			   
			}while(counter[(v[i][j]-1)]!=0);
			printf("%d ",v[i][j]);
		    counter[(v[i][j]-1)]++;
			
		}
		printf("\n");
	} 
	return 0;
}
