#include <stdio.h>.
#include <stdlib.h>



int main() 
{
	int cont=0,number=0,a;
	printf("請輸入一個數字");
	scanf("%d",&a);
	for(number=2;number<a;number=number+1)
	{
		if(a%number==0)
		{
			cont=cont+1;
		}
	}
	if(cont==0)
	{
		printf("yes");
    }
    else
    {
    	printf("no");
	}
	
	
	return 0;
}
