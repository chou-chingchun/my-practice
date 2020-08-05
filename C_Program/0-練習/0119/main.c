/*隨機輸入若干個學生的體重，以輸入負數或零結束，
分別求最重和最輕的體重，並計算平均體重。*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max,min,kg,sum,i,average;
	printf("請輸入第1位體重:");
	scanf("%d",&kg);
	max=kg;
    min=kg;
	for(i=2;kg>0;i=i+1)
	{
		printf("請輸入第%d位體重:",i);
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
    printf("請輸入第1位學生體重:");
    scanf("%d",&a);
    sum=max=min=a; // 這裡給初始值 
    for(i=2;a>0;i++)
    {
    	printf("請輸入第%d位學生體重:",i);
	    scanf("%d",&a);
        if (a<=0)
        {
        	break; //=0或<0離開 
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
