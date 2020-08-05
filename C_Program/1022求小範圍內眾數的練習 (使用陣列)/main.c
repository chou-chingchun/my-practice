#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n;//璸计块计
	int b[10]={0};
	printf("叫块100~9タ俱计:");
	for(i=1;i<=10;i=i+1)
	{
		scanf("%d",&n);
		b[n]++;
	} 
	int max=0;
	for(i=1;i<10;i=i+1)
	{
		if(b[i]>=b[max])//安砞b[0]琌程ゑ耕 
		{
			max=i;
		}
	}
	printf("%d\n",max);
	
	return 0;
}
