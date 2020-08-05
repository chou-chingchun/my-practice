/*從鍵盤輸入某班學生某門課的成績及其學號（班級人數最多40人，具體人數由鍵盤輸入），
輸出該班最高分和最低分及其學生學號；並輸出該班該課程的總分和平均分。請編寫程式。*/

#include <stdio.h>
#include <stdlib.h>
void scangrade(int);
void sortgrade(int);
int main()
{
	int people=0;//班級人數 
	int i=0,j=0;
	int* n;
	int sum=0,average=0;//總和及平均 
	do
	{
		printf("請輸入班級人數:");//輸入班級人數 
	    scanf("%d",&people);
	    if(people>40)
	    {
	    	printf("請重新輸入\n");
		}
		
	}while(people>40);
	int grade[people];//存放分數的陣列 
	for(i=0;i<people;i=i+1)
	{
		printf("請輸入%d位成績:",i+1);//輸入成績 
		scanf("%d",&grade[i]);
	}
	for(i=0;i<people;i=i+1)
	{
		n[i]=grade[i];
	}
	for(i=0;i<people;i=i+1)//將分數排序 
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
		sum=sum+grade[i];//加總輸入的分數 
	}
	printf("\n");
	average = sum/people;
	printf("最低分:%d\n",grade[0]);//第一個數字為最小值 
	printf("最高分:%d\n",grade[people-1]);//最後一個數字為最大值 
	printf("總分:%d\n",sum);
	printf("平均分:%d\n",average);
	return 0;
}

