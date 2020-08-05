/*絪糶ㄢㄧΑだ―ㄢ俱计程そ计㎝程そ计
ノㄧΑ㊣硂ㄢㄧΑ块挡狦ㄢ俱计パ龄絃块*/
#include <stdio.h>
#include <stdlib.h>

int factor(int,int);
int multiple(int,int);
int main()
{
	int n,m;
	printf("叫块ㄢタ俱计:");
	scanf("%d%d",&n,&m);
	printf("程そ计:%d\n",factor(n,m));
	printf("程そ计:%d\n",multiple(n,m));
	return 0;
}

int factor(int n,int m)
{
	int i,max,answer;
	max=n;
	if(m>max)
	{
		max=m;
	}
	for(i=max;i<=m*n;i=i+1)
	{
		if(i%n==0 && i%m==0)
		{
			answer=i;
			break;
		}
	}
	return answer;
}

int multiple(int n,int m)
{
	int i,min,answer;
	for(i=1;i<=n&&i<=m;i=i+1)
	{
		if(n%i==0 && m%i==0)
		{
			answer=i;
		}
		
	}
	return answer;
}

