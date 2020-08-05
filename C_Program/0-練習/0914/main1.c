/*輸入n的值，n代表行數，輸出如圖所示的圖形。
 *

 *  *  *

 *  *  *  *  *

 *  *  *  *  *  *  *    (此圖為n＝4時的輸出結果)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,b,a;
	printf("請輸入n=");
	scanf("%d",&n);
	for(a=1;a<=n;a=a+1)
	{
		for(b=1;b<=2*a-1;b=b+1)
		{
			printf("* ");
		}
	printf("\n");	
	}
	
	return 0;
} 

/*for(n=1;n<=4;n=n+1)
	{
		switch(n) 
		{
			case 1:printf("*\n");break;
			case 2:printf("***\n");break;
			case 3:printf("*****\n");break;
			case 4:printf("*******\n");break;
		} 
	}*/
