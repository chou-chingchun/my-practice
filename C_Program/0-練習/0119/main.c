/*�H����J�Y�z�Ӿǥͪ��魫�A�H��J�t�Ʃιs�����A
���O�D�̭��M�̻����魫�A�íp�⥭���魫�C*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max,min,kg,sum,i,average;
	printf("�п�J��1���魫:");
	scanf("%d",&kg);
	max=kg;
    min=kg;
	for(i=2;kg>0;i=i+1)
	{
		printf("�п�J��%d���魫:",i);
	    scanf("%d",&kg);
	    if(kg==0 || kg<0)
	    break;
		if(kg>max)
		{
			max=kg;
		}
		if(kg<min)
		{
			min=kg;
		}
		sum=sum+kg;
	}
	average=sum/(i-1);
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%d\n",sum);
	printf("%d\n",average);

	
	return 0;
}



















/*int main()
{
    int a,b=1,sum=0,max,min,i=1;
    double p;
    printf("�п�J��1��ǥ��魫:");
    scanf("%d",&a);
    sum=max=min=a; // �o�̵���l�� 
    for(i=2;a>0;i++)
    {
    	printf("�п�J��%d��ǥ��魫:",i);
	    scanf("%d",&a);
        if (a<=0)
        {
        	break; //=0��<0���} 
		}
		if(a<min)
		{
			min=a;
		}
        if(a>max)
		{
			max=a;
		}
        sum=sum+a;
	}
    p= (sum)/(i*1.0);
    printf("max=%d \nmin=%d \nmean=%f \n",max,min,p);
    return 0;
}*/ 
