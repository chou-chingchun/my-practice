#include <stdio.h>
#include <stdlib.h>

int main()
{
	int guess,answer=20,cont=0;
	while(cont ==0 ||guess!=answer)
	{
		printf("請輸入數字:");
	    scanf("%d",&guess);
		if(guess>answer)
		{
			printf("太大了\n");
		}
		else if(guess>answer)
		{
			printf("太小了\n");
		}
	cont=cont+1;
	printf("第%d次\n",cont);
	}
	printf("恭喜答對\n");
	
	
	return 0;
}
